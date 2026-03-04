//add 2 matrix using function
#include<stdio.h>
void read(int,int);
void display(int,int);
void add(int,int);
void main()
{
	r1,c1,r2,c2;
	printf("Enter order of Matrix A & Matrix B : ");
	scanf("%dx%d%dx%d",&r1,&c1,&r2,&c2);
	if(r1!=r2 || c1!=c2)
		printf("Matrix addition is defined.");
	else
	{
		read(r1,c1);
		read(r2,c2);
		printf("Matrix A:\n");
		display(r1,c1);
		printf("Matrix B:\n");
		display(r2,c2);
		add(r1,c1);
		printf("Matrix A + Matrix B:\n");
		display(r1,c1);
	}
}
void read(int r1, int c1)
{
	int i,j
}
