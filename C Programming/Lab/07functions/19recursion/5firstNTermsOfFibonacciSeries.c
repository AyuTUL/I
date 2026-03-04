// Lab 7.19.5: WAP to generate first n terms of Fibonacci series using recursive function to return N th term of series
#include <stdio.h>
int fibo(int);
void main()
{
	int n, i, f;
	printf("Enter nth term : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		f = fibo(i);
		printf("%-6d", f);
	}
}
int fibo(int i)
{
	if (i == 1)
		return 0;
	else if (i == 2)
		return 1;
	else
		return (fibo(i - 1) + fibo(i - 2));
}