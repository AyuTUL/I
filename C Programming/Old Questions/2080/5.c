#include<stdio.h>
void main()
{
	int m[5][5],p,q,l[5]={0},i,j;
	printf("Enter order of matrix : ");
	scanf("%dx%d",&p,&q);
	printf("Enter %d elements : ",p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&m[i][j]);
			if(m[i][j]>l[i])
				l[i]=m[i][j];
		}
	}
	printf("Matrix :\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
			printf("%6d",m[i][j]);
		printf("\n");
	}
	for(i=0;i<p;i++)
		printf("\nLargest in row %d = %d",i+1,l[i]);
}
