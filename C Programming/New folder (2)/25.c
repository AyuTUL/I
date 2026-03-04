//pyramid
#include<stdio.h>
void main()
{
	int i,s=1,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
			printf("%d",s*s);
			s*=10+1;
		}
		printf("\n");
	}
}
