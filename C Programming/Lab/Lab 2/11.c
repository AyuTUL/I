//total marks, percentage, results, division
#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,t,v;
	float p;
	printf("Enter marks in 5 subjects : ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	t=s1+s2+s3+s4+s5;
	printf("Total Marks = %d",t);
	if(s1<40 || s2<40 || s3<40 || s4<40 || s5<40)
	{
		printf("\nYou have failed.");	
	}
	else
	{
		p=t*0.002*100;
		printf("\nPercentage = %.2f %%",p);
		printf("\nYou have passed.");
		v=floor(p/10);
		switch(v)
		{
			case 10:
			case 9:
			case 8:
				printf("\nYour divison is Distinction");
				break;
			case 7:
			case 6:
				printf("\nYour divison is 1st Division");
				break;		
			case 5:
				printf("\nYour divison is 2nd Division");
				break;		
			case 4:
				printf("\nYour divison is 3rd Division");
				break;	
		}
		/*if(p>=90)
			d[100]="Distinction";
		else if(p>=80 && p<90)
			d[100]="First Divison";
		else if(p>=70 && p<80)
			d[100]="Second Divison";
		else if(p>=60 && p<70)
			d[100]="Third Divison";
		else if(p>=50 && p<60)
			d[100]="Fifth Divison";
		else if(p>=40 && p<50)
			d[100]="Sixth Divison";
		print("\nYour division is %s",d[100]);
	}*/
	}
}
