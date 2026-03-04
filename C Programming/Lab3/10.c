//roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,x1,x2;
	printf("Enter coefficients of quadratic equation : ");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
		printf("The coefficient of x^2 cannot be zero in a quadratic equation. Please try again.");
	else
	{
		d=b*b-4*a*c;
		printf("The roots of %.2fx^2 + %.2fx + %.2f are : ",a,b,c);
		if(d==0)
		{
			x1=-b/(2*a);
			printf("Real and Equal\nx1 = %.2f\nx2 = %.2f",x1,x1);
		}
		else if(d>0)
		{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("Real and Different\nx1 = %.2f\nx2 = %.2f",x1,x2);
		}
		else if(d<0)
		{
			x1=-b/2*a;
			x2=sqrt(-d)/2*a;
			printf("Imaginary\nx1 = %.2f + %.2f i\nx2 = %.2f - %.2f i",x1,x2,x1,x2);
		}
	}
}
