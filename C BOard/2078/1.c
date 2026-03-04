#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter integer : ");
	scanf("%d",&n);
	if(n<=1)
		printf("Neither.");
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
				break;
		}
		if(i>n/2)
			printf("%d is prime",n);
		else
			printf("%d is composite",n);
	}
}	
