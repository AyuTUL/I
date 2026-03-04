// Lab 7.3: WAP to find maximum of two number using function
#include <stdio.h>
int max(int, int);
void main()
{
	int a, b, l;
	printf("Enter 2 numbers : ");
	scanf("%d%d", &a, &b);
	if (a == b)
		printf("Both numbers are same.");
	else
	{
		l = max(a, b);
		printf("Maximum among %d & %d = %d", a, b, l);
	}
}
int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}