// Lab 8.3: Write a program to read empid, name, post and salary of N employee using structure. And display detail of those employee whose salary is between 40000 and 60000
#include <stdio.h>
struct employee
{
	int id;
	char name[20], post[20];
	float sal;
} e[100];
void main()
{
	int i, n;
	printf("Enter no. of employees : ");
	scanf("%d", &n);
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
	printf("\nDetails of employees with salary between 40000 & 60000 :\n");
	printf("| %-6s | %-20s | %-20s | %-9s |\n", "Emp ID", "Name", "Post", "Salary");
	for (i = 0; i < n; i++)
		if (e[i].sal >= 40000 && e[i].sal <= 60000)
			printf("| %6d | %-20s | %-20s | %9.2f |\n", e[i].id, e[i].name, e[i].post, e[i].sal);
}