//matrix multiplication
#include<stdio.h>
void main()
{
	int m1[5][5],m2[5][5],p[5][5]={0},r1,c1,r2,c2,i,j,k;
	printf("Enter order of Matrix A & Matrix B (<5x5) : ");
	scanf("%dx%d%dx%d",&r1,&c1,&r2,&c2);
	if(c1!=r2)
		printf("Matrix multiplication is not defined.");
	else
	{
		printf("Enter elements of matrix A (=%d) : ",r1*c1);
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&m1[i][j]);
		printf("Enter elements of matrix B (=%d) : ",r2*c2);
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&m2[i][j]);
		printf("Matrix A :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%3d",m1[i][j]);	
			printf("\n");
		}
		printf("Matrix B :\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
				printf("%3d",m2[i][j]);
			printf("\n");
		}
		printf("Matrix A x Matrix B :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
					p[i][j]+=m1[i][k]*m2[k][j];
				printf("%3d",p[i][j]);
			}
		}
	}
}
