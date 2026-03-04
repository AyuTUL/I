#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,s=0;
	printf("Enter nth term : ");
	scanf("%d",&n);
	printf("Sum of 1^1 + 2^2 + 3^3 + 4^4 + ... upto %dth term :\n",n);
	for(i=1;i<=n;i++)
		s+=pow(i,i);
	printf("Sum = %d",s);
}
