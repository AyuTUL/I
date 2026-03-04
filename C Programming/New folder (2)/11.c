//factorial
#include<stdio.h>
void main()
{
	int n,i,f=1;
	printf("Enter positive integer : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
		f=f*i;
	printf("Factorial of %d = %d",n,f);
	
}
