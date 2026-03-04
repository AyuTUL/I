#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>6-i;k--)
			printf(" ");
		for(j=1;j<=6-i;j++)
			printf("%d",j);
		for(j=5-i;j>=1;j--)
			printf("%d",j);	
		printf("\n");	
	}
}
