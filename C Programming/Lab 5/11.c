//prime using function
#include<stdio.h>
void isprime(int);
void main()
{
	int n;
	printf("Enter positive integer : ");
	scanf("%d",&n);
	if(n==1 || n==0)
		printf("%d is neither prime nor composite.",n);
	else
		isprime(n);
}
void isprime(n)
{
	int i,f;
	for(i=2;i<=n/2;i++) 
	{
		if(n%i==0)
			break;
	}
	if(i>n/2)
		printf("%d is prime.",n);
	else
		printf("%d is composite.",n);
}
