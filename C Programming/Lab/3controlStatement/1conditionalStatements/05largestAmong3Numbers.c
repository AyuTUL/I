// Lab 3.1.5: WAP to read three numbers and find the largest one
#include <stdio.h>
void main()
{
	int a, b, c, l;
	printf("Enter 3 numbers : ");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
		l = a;
	else if (b > c)
		l = b;
	else
		l = c;
	printf("Largest among %d ,%d & %d = %d", a, b, c, l);
}