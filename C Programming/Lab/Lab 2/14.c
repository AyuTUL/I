//menu based for area, perimter, exit
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	float l,b,p,a;
	int ch;
	printf("Enter length & breadth : ");
	scanf("%f%f",&l,&b);
	printf("\n1. Area of Rectangle\n2. Perimeter of Rectangle\n3. Exit\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			a=l*b;
			printf("\nArea of Rectangle = %.2f\n",a);
			break;
		case 2:
			p=2*(l+b);
			printf("\nPerimeter of Rectangle = %.2f\n",p);
			break;
		case 3:
			printf("\nThank you for using the program.");
			exit(0);
			break;
		default:
			printf("\nWrong choice. Please choose from 1 - 3.\n");
	}
}
