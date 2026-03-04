//1st 10 terms of 1,5,9,..
#include<stdio.h>
void main()
{
	int i,n=1;
	for(i=1;i<=10;i++,n+=4)
	{
		printf("%d\t",n);
	}
}
