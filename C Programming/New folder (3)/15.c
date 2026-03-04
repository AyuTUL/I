//menu for +,-,*,/
#include<stdio.h>
void main()
{
	int a,b,c;
	char ch;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&a,&b);
	printf("\n1. Addition(+)\n2. Subtraction(-)\n3. Multiplication(*)\n4. Division(/)\nEnter your choice : ");
	ch=getche();
	switch(ch)
	{
		case '+':
			c=a+b;
			printf("\n%d + %d = %d",a,b,c);
			break;
		case '-':
			c=a-b;
			printf("\n%d - %d = %d",a,b,c);
			break;
		case '*':
			c=a+b;
			printf("\n%d * %d = %d",a,b,c);
			break;
		case '/':
			c=a+b;
			printf("\n%d / %d = %d",a,b,c);
			break;
		default:
			printf("\nWrong choice. Please choose from + - * /.");
	}
}
