//transpose
#include<stdio.h>
void main()
{
	int a[5][5],t[5][5],i,j,r,c;
	printf("Enter order of matrix : ");
	scanf("%dx%d",&r,&c);
	printf("Enter elements of matrix (=%d) : ",r*c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("Matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	printf("Transpose :\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			t[i][j]=a[j][i];
			printf("%3d",t[i][j]);
		}
		printf("\n");
	}
}
