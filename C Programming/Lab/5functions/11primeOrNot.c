// Lab 5.11: WAP that uses function isprime() for testing whether a number is prime or not
#include <stdio.h>
void isprime(int);
void main()
{
	int n;
	printf("Enter positive integer : ");
	scanf("%d", &n);
	if (n == 1 || n == 0)
		printf("%d is neither prime nor composite.", n);
	else
		isprime(n);
}
void isprime(int n)
{
	int i, f;
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)
			break;
	if (i > n / 2)
		printf("%d is prime.", n);
	else
		printf("%d is composite.", n);
}