// Lab 5.4: WAP a program to find smallest of three number using function
#include <stdio.h>
int min(int[]);
void main()
{
	int i, a[100], s;
	printf("Enter 3 integers : ");
	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	s = min(a);
	printf("Smallest = %d", s);
}

int min(int a[])
{
	int i, s = a[0];
	for (i = 1; i < 3; i++)
	{
		if (s > a[i])
			s = a[i];
	}
	return (s);
}