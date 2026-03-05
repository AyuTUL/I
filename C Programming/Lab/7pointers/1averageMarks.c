// Lab 7.1: Write a program to read roll, name, markc_in_C and marks_in_IIT of N students and then find average marks.Use pointer and DMA
#include <stdio.h>
#include <stdlib.h>
struct student
{
	int roll;
	char name[20];
	float mc, mit, avg;
};
typedef struct student rec;
void read(rec *);
void disp(rec);
void main()
{
	int n, i;
	rec *p;
	printf("Enter no. of students : ");
	scanf("%d", &n);
	p = (rec *)malloc(sizeof(rec) * n);
	if (p == NULL)
	{
		printf("Memory allocation failed.");
		exit(0);
	}
	printf("Enter roll no., name & marks in C & IIT of %d students :\n", n);
	for (i = 0; i < n; i++)
	{
		printf("For student %d :\n", i + 1);
		read(p + i);
	}
	printf("\nStudent Details :\n");
	printf("| %-8s | %-20s | %-6s | %-6s | %-7s |\n", "Roll No.", "Name", "C", "IIT", "Average");
	for (i = 0; i < n; i++)
		disp(*(p + i));
	free(p);
}
void read(rec *p)
{
	scanf("%d", &p->roll);
	fflush(stdin);
	gets(p->name);
	scanf("%f%f", &p->mc, &p->mit);
	p->avg = (p->mc + p->mit) / 2;
}
void disp(rec p)
{
	printf("| %8d | %-20s | %6.2f | %6.2f | %7.2f |\n", p.roll, p.name, p.mc, p.mit, p.avg);
}