// Lab 3.1.7: WAP a program to find the smallest among four given numbers
#include <Stdio.h>
void main()
{
	int a, b, c, d, s;
	printf("Enter 4 numbers : ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a < b && a < c && a < d)
		s = a;
	else if (b < c && b < d)
		s = b;
	else if (c < d)
		s = c;
	else
		s = d;
	printf("Smallest among %d, %d, %d, & %d = %d", a, b, c, d, s);
}