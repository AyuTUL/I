// Lab 6.4: Write a program to read empid, name, post and salary of N employee using structure. And arrange the records according to alphabetical order of name field
#include <stdio.h>
#include <string.h>
struct employee
{
	int id;
	char name[20], post[20];
	float sal;
};
typedef struct employee emp;
void read(emp[], int);
void disp(emp[], int);
void sort(emp[], int);
void main()
{
	emp e[100];
	int n;
	printf("Enter no. of employees : ");
	scanf("%d", &n);
	read(e, n);
	printf("Employee Details :\n");
	disp(e, n);
	printf("\nEmployee Details in Alphabetical Order :\n");
	sort(e, n);
	disp(e, n);
}
void read(emp e[], int n)
{
	int i;
	printf("Enter empid, name, post & salary of %d employees :\n", n);
	for (i = 0; i < n; i++)
	{
		printf("For employee %d :\n", i + 1);
		scanf("%d", &e[i].id);
		fflush(stdin);
		gets(e[i].name);
		fflush(stdin);
		gets(e[i].post);
		scanf("%f", &e[i].sal);
	}
}
void disp(emp e[], int n)
{
	int i;
	printf("| %-6s | %-20s | %-20s | %-9s |\n", "Emp ID", "Name", "Post", "Salary");
	for (i = 0; i < n; i++)
		printf("| %6d | %-20s | %-20s | %9.2f |\n", e[i].id, e[i].name, e[i].post, e[i].sal);
}
void sort(emp e[], int n)
{
	int i, j;
	emp temp;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (strcmp(e[j].name, e[j + 1].name) > 0)
			{
				temp = e[j];
				e[j] = e[j + 1];
				e[j + 1] = temp;
			}
}