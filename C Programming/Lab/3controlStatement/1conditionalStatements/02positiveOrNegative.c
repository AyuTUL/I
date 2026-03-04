// Lab 3.1.2: Write a program to read a number and check whether it is positive or negative
#include <stdio.h>
void main()
{
	int n;
	printf("Enter number : ");
	scanf("%d", &n);
	if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is negative", n);
}