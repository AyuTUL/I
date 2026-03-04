// Lab 7.6: WAP to find HCF of two number using function
#include <stdio.h>
int hcf(int, int);
void main()
{
	int a, b;
	printf("Enter 2 integers : ");
	scanf("%d%d", &a, &b);
	if (a < 0 || b < 0)
		printf("HCF of negative numbers doesn't exist.");
	else if (a == 0 && b == 0)
		printf("HCF of both 0 doesn't exist.");
	else
		printf("HCF of %d & %d = %d", a, b, hcf(a, b));
}
int hcf(int a, int b)
{
	int r;
	if (a == 0)
		return (b);
	else
	{
		while (b != 0)
		{
			r = a % b;
			a = b;
			b = r;
		}
	}
	return (a);
}