// Lab 2.7.2: Write a program to read three different numbers and find the smallest one. (using ternary operator)
#include <stdio.h>
void main()
{
	int a, b, c, l;
	printf("Enter 3 numbers : ");
	scanf("%d%d%d", &a, &b, &c);
	a == b &&a == c ? printf("All numbers are same") : (l = a < b ? a : b; l = l < c ? l : c);
	printf("\nSmallest No. = %d", l);
}