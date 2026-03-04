// Lab 2.4.alt: Write a program to read distance in meters and convert it into kilometers and meters. [1 km = 1000 m and output display output as 2575m=2 km and 575 m]
#include <stdio.h>
void main()
{
	int d, km, m;
	printf("Enter distance in meters : ");
	scanf("%d", &d);
	km = d / 1000;
	m = d % 1000;
	printf("\n%d m = %d km and %d m", d, km, m);
}