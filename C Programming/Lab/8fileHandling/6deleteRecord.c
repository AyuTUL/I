// Lab 8.6: Write a program to delete record of a student from file "result.txt"
#include <stdio.h>
#include <string.h>
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
	rec r;
	char n[30];
	int flag = 0, i, er, l;
	printf("Enter name of student whose record is to be deleted : ");
	gets(n);
	fp1 = fopen("result.txt", "r");
	if (fp1 == NULL)
	{
		printf("Error in reading file.");
		return;
	}
	fp2 = fopen("temp.txt", "w");
	while (fscanf(fp1, "%d %s %s %f", &r.roll, r.name[0], r.name[1], &r.mc) != EOF)
	{
		l = strlen(r.name[0]);
		r.name[0][l] = ' ';
		r.name[0][l + 1] = '\0';
		strcat(r.name[0], r.name[1]);
		if (strcmp(n, r.name[0]) == 0)
		{
			flag = 1;
			printf("Record deleted succesfully.");
			continue;
		}
		fprintf(fp2, "%d %s %.2f\n", r.roll, r.name[0], r.mc);
	}
	if (flag == 0)
		printf("Record not found.");
	fclose(fp2);
	fclose(fp1);
	er = remove("result.txt");
	if (er != 0)
	{
		printf("Delete error.");
		return;
	}
	er = rename("temp.txt", "result.txt");
	if (er != 0)
	{
		printf("Rename error.");
		return;
	}
}