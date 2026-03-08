#include<stdio.h>
void main()
{
	int m[3][3],i,j;
	printf("Enter elements of 3 x 3 matrix (=9) : ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&m[i][j]);
	printf("Matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%6d",m[i][j]);
		printf("\n");
	}
	printf("Transpose :\n");		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%6d",m[j][i]);
		printf("\n");
	}
}
