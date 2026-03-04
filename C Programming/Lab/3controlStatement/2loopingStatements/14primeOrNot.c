// Lab 3.2.14: Write a program to check whether given number is prime or not
#include <stdio.h>
void main()
{
	int n, i;
	printf("Enter an integer : ");
	scanf("%d", &n);
	if (n == 1 || n == 0)
		printf("%d is neither prime nor composite.", n);
	else
	{
		for (i = 2; i <= n / 2; i++)
			if (n % i == 0)
				break;
		if (i > n / 2)
			printf("%d is prime", n);
		else
			printf("%d is composite", n);
	}
}