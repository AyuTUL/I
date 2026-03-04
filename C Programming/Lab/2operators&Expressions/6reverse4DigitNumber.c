// Lab 2.6: Write a program to reverse four-digit number
#include <stdio.h>
void main()
{
	int n, temp, u, t, h, th, rev;
	printf("Enter 4 digit no. : ");
	scanf("%d", &n);
	temp = n;
	u = n % 10;
	n = n / 10;
	t = n % 10;
	n = n / 10;
	h = n % 10;
	n = n / 10;
	th = n % 10;
	rev = u * 1000 + t * 100 + h * 10 + th;
	printf("\nReverse of %d = %d", temp, rev);
}