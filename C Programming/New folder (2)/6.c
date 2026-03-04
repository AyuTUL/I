//1st n even numbers and their sum
#include<stdio.h>
void main()
{
	int n,i,s=0,e;
	printf("Enter nth term : ");
	scanf("%d",&n);
	printf("First %d Even Numbers :\n",n);
	for(i=1;i<=n;i++)
	{
		e=2*i;
		printf("%d\t",e);
		s+=e;
	}
	printf("\nSum of first %d even numbers = %d",n,s);
}
