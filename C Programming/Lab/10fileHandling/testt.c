//write roll,name,marks in C of n students in result.txt
#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[30];
	float mc;
};
typedef struct student rec;
void main()
{
	FILE *fp;
	rec *r;
	int i,n;
	printf("Enter no. of students : ");
	scanf("%d",&n);
	r=(rec *)malloc(sizeof(rec)*n);
	if(r==NULL)
	{
		printf("Memory allocation failed.");
		exit(0);
	}
	fp=fopen("resultt.txt","w");
	if(fp==NULL)
	{
		printf("Error opening file.");
		free(r);
		exit(0);
	}
	printf("Enter roll no., name & marks in C of %d students :",n);
	for(i=0;i<n;i++)
	{
		printf("\nFor student %d :\n",i+1);
		scanf("%d",&(r+i)->roll);
		fflush(stdin);
		gets((r+i)->name);
		scanf("%f",&(r+i)->mc);
		fwrite((r+i),sizeof(rec),1,fp);
		//fprintf(fp,"%d %s %.2f\n",(r+i)->roll,(r+i)->name,(r+i)->mc);
	}
	printf("File created successfully.");
	fclose(fp);
	free(r);
}
