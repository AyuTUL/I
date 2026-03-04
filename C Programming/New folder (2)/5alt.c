//first n odd terms
#include<stdio.h>
void main()
{
	int n,i,term=1;
	printf("Enter nth term : ");
	scanf("%d",&n);
	printf("First %d Odd Terms :\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",term);
		term=term+2;	
	}
}
