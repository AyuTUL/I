// Lab 2.7.1: Write a program to check whether entered number is odd or even using ternary operator. (? :)
#include <stdio.h>
void main()
{
	int n, r;
	printf("Enter number : ");
	scanf("%d", &n);
	r = n % 2;
	n == 0 ? printf("Neither") : (r == 0 ? printf("Even") : printf("Odd"));
}