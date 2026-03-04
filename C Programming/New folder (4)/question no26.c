#include<stdio.h>
#include<conio.h>
int main ()
{
	int i, j ;
	for (i=1;i<=4;i++)
	{
		for(j=4;j>=4-i;j--)
		{
			printf(" ");
		}
		printf("*");
	}
	return 0 ;
}


