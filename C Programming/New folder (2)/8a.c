//sum of square of 1st n natural numbers for
#include<stdio.h>
void main()
{
	int n,i,s=0;
	printf("Enter nth term : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s+i*i;
	printf("Sum of square of first %d natural numbers = %d",n,s);
}
