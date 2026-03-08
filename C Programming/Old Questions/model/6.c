#include<stdio.h>
#include<math.h>
void main()
{
	int n,s=0,i;
	printf("Enter nth term : ");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		s=s+pow(i,2);
		i++;
	}
	printf("Sum of square upto %d = %d",n,s);
}
