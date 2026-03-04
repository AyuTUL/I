//sum of square of 1st n natural numbers while
#include<stdio.h>
void main()
{
	int n,i=1,s=0;
	printf("Enter nth term : ");
	scanf("%d",&n);
	while(i<=n)
	{
		s+=i*i;
		i++;
	}
	printf("Sum of square of first %d natural numbers = %d",n,s);
}
