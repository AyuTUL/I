// Lab 2.4: Write a program to read distance in meters and convert it into kilometers and meters. [1 km = 1000 m and output display output as 2575m=2 km and 575 m]
#include <stdio.h>
#include <math.h>
void main()
{
	float d, km, m;
	printf("Enter distance in meters : ");
	scanf("%f", &d);
	km = (int)d / 1000;
	m = fmod(d, 1000);
	printf("\n%.2f m = %.2f km and %.2f m", d, km, m);
}