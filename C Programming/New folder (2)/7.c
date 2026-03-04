//sum of 1st n natural numbers
#include<stdio.h>
void main()
{
	int n,i,s=0;
	printf("Enter nth term : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s+=i;
	printf("Sum of first %d natural numbers = %d",n,s);
}
