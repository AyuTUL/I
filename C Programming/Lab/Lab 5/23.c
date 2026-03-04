//generate first n terms of Fibonacci using recursion
#include<stdio.h>
int fibo(int);
void main()
{
	int n,i,f;
	printf("Enter nth term : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		f=fibo(i);
		printf("%-6d",f);
	}
}
int fibo(int i)
{
	if(i==0)
		return 0;
	else if(i==1)
		return 1;
	else
		return(fibo(i-1)+fibo(i-2));
		
}
