//roots of quadratic using function
#include<stdio.h>
#include<math.h>
void findroots(float,float,float);
void main()
{
	float a,b,c;
	printf("Enter the coefficients of quadratic equation : ");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
		printf("The coefficient of x^2 cannot be zero in a quadratic equation. Please try again.");
	else
	{	
		printf("The quadratic equation is:\n%gx^2 %+gx %+g",a,b,c);
		findroots(a,b,c);
	}
}
void findroots(float a,float b,float c)
{
	float d,x1,x2;
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("\nThe roots are real & equal.");
		x1=-b/(2*a);
		printf("\nx1 = x2 = %g",x1);
	}
	else if(d>0)
	{
		printf("\nThe roots are real & different.");
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("\nx1 = %g\nx2 = %g",x1,x2);
	}
	else
	{
		printf("\nThe roots are imaginary.");
		x1=-b/(2*a);
		x2=(sqrt(-d))/(2*a);
		printf("\nx1 = %g + %g i\nx2 = %g - %g i",x1,x2,x1,x2);
	}
}
