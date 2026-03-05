// Lab 8.5: Write a program to set marks in C to 30 whose marks is less than 30 and greater than 27 in file "result.txt"
#include <stdio.h>
struct student
{
	int roll;
	char name[2][30];
	float mc;
};
typedef struct student rec;
void main()
{
	FILE *fp1, *fp2;
	int i, er;
	rec r;
	fp1 = fopen("result.txt", "r");
	if (fp1 == NULL)
	{
		printf("File doesn't exist.");
		return;
	}
	fp2 = fopen("temp.txt", "w");
	while (fscanf(fp1, "%d %s %s %f", &r.roll, r.name[0], r.name[1], &r.mc) != EOF)
	{
		if (r.mc >= 27 && r.mc <= 30)
			r.mc = 30;
		fprintf(fp2, "%d %s %s %.2f\n", r.roll, r.name[0], r.name[1], r.mc);
	}
	fclose(fp2);
	fclose(fp1);
	printf("Records updated succesfully.");
	er = remove("result.txt");
	if (er != 0)
	{
		printf("\nDelete error.");
		return;
	}
	er = rename("temp.txt", "result.txt");
	if (er != 0)
	{
		printf("\nRename error.");
		return;
	}
}