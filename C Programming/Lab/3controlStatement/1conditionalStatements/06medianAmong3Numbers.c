// Lab 3.1.6: WAP to read three numbers and find the median number
#include <stdio.h>
void main()
{
	int a, b, c, m;
	printf("Enter 3 numbers : ");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a < c || a > c && a < b)
		m = a;
	else if (b > a && b < c || b > c && b < a)
		m = b;
	else
		m = c;
	printf("Median among %d ,%d & %d = %d", a, b, c, m);
}