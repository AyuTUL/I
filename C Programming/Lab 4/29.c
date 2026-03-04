#include<stdio.h>
void main()
{
	char name[10][20];
	int n,i;
	printf("Enter no. of students (<=10) : ");
	scanf("%d",&n);
	printf("Enter name of %d students:\n",n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(name[i]);
	}
	printf("Names :\n");
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);
}
