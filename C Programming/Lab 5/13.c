//pyramid * upto n lines using function
#include<stdio.h>
void ast(int,int);
void main()
{
	int i,n;
	printf("Enter no. of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		ast(i,n);
}
void ast(int i, int n)
{
	int j;
	for(j=0;j<n-i;j++)
		printf(" ");
	for(j=0;j<2*i-1;j++)
		printf("*");
	printf("\n");	
}
