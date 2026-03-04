//multiplication table upto n
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter nth term : ");
	scanf("%d",&n);
	printf("Multiplication table upto %d:\n",n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
			printf("%d\t",i*j);
		printf("\n");
	}	
}
	
