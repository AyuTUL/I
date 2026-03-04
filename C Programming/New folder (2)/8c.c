//sum of square of 1st n natural numbers do while
#include<stdio.h>
void main()
{
	int n,i=1,s=0;
	printf("Enter nth term : ");
	scanf("%d",&n);
	do
	{
		s+=i*i;
		i++;
	}while(i<=n);
	printf("Sum of square of first %d natural numbers = %d",n,s);
}
