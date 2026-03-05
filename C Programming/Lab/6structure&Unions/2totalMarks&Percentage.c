// Lab 6.2: Write a program to read roll, name and marks in 5 subjects of N numbers of students using structure and find total marks and percentage and finally display details in tabular format
#include <stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks[5], total, per;
} s[5];
void main()
{
	int i, j;
	printf("Enter roll, name and marks in Physics, IIT, DL, C, Maths of 5 students:\n");
	for (i = 0; i < 5; i++)
	{
		printf("For Student %d :\n", i + 1);
		scanf("%d", &s[i].roll);
		fflush(stdin);
		gets(s[i].name);
		for (j = 0; j < 5; j++)
		{
			scanf("%f", &s[i].marks[j]);
			s[i].total = s[i].total + s[i].marks[j];
		}
		s[i].per = s[i].total / 5;
	}
	printf("\nStudent Details :\n");
	printf("| %-8s | %-20s | %-7s | %-7s | %-7s | %-7s | %-7s | %-7s | %-10s |\n", "Roll No.", "Name", "Physics", "C", "IIT", "DL", "Maths", "Total", "Percentage");
	for (i = 0; i < 5; i++)
	{
		printf("| %-8d | %-20s |", s[i].roll, s[i].name);
		for (j = 0; j < 5; j++)
			printf(" %-7.2f |", s[i].marks[j]);
		printf(" %-7.2f | %-8.2f %% |\n", s[i].total, s[i].per);
	}
}