#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *m[5],row,col,i,j;
	printf("Enter order of matrix : ");
	scanf("%dx%d",&row,&col);
	for(i=0;i<row;i++)
	{
		m[i]=(int *)malloc(sizeof(int)*col);
		if(m[i]==NULL)
		{
			printf("Memory allocation failed.");
			exit(0);
		}
	}
	printf("Enter elements of matrix (=%d) : ",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",m[i]+j);
	}
	printf("Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%6d",*(m[i]+j));
		printf("\n");
	}
	for(i=0;i<row;i++)
		free(m[i]);
}
