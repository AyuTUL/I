#include<stdio.h>
void read(int [][5],int,int);
int same(int [][5],int [][5],int,int);
void main()
{
	int a[5][5],b[5][5],r1,c1,r2,c2,i,v,j;
	printf("Enter order of matrix A : ");
	scanf("%dx%d",&r1,&c1);
	printf("Enter order of matrix B : ");
	scanf("%dx%d",&r2,&c2);
	if(r1!=r2 || c1!=c2)
	{
		printf("Different.");
		return;
	}
	else
	{
		printf("Enter elements of matrix A (=%d) : ",r1*c1);
		read(a,r1,c1);
		printf("Enter elements of matrix B (=%d) : ",r2*c2);
		read(b,r2,c2);
		v=same(a,b,r1,c1);
		if(v==1)
			printf("Same");
		else
			printf("Different");
	}
}
void read(int m[][5],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&m[i][j]);
}
int same(int a[][5],int b[][5],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=b[i][j])
			{	
				return 0;
			}
		}
	}
	return 1;
}
