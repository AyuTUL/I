//matrix add
#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],s[5][5],r1,c1,r2,c2,i,j;
	printf("Enter order of 2 matrices : ");
	scanf("%dx%d%dx%d",&r1,&c1,&r2,&c2);
	if(r1!=r2 || c1!=c2)
		printf("Matrix addition is not defined.");
	else
	{
		printf("Enter elements of matrix A (=%d) : ",r1*c1);
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("Enter elements of matrix B (=%d) : ",r2*c2);
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
		printf("Matrix A :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%3d",a[i][j]);	
			printf("\n");
		}
		printf("Matrix B :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%3d",b[i][j]);
			printf("\n");
		}
		printf("Matrix A + Matrix B :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				s[i][j]=a[i][j]+b[i][j];
				printf("%3d",s[i][j]);
			}
			printf("\n");
		}
	}
}
