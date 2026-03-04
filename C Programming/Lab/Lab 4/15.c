//sum of rows and column
#include<stdio.h>
void main()
{
	int a[5][5],r,c,i,j,sr[5]={0},sc[5]={0};
	printf("Enter order of matrix : ");
	scanf("%dx%d",&r,&c);
	printf("Enter elements of matrix (=%d) : ",r*c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			sr[i]+=a[i][j];			
		}
	for(i=0;i<c;i++)
		for(j=0;j<r;j++)
			sc[i]+=a[j][i];
	printf("Matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
		printf("Sum of row %d = %d\n",i+1,sr[i]);
	for(i=0;i<c;i++)	
		printf("Sum of column %d = %d\n",i+1,sc[i]);
}
