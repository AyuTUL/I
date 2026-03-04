//between 40000 to 60000
#include<stdio.h>
void main()
{
	double s[100];
	int n,i,c=0;
	printf("Enter no. of employees : ");
	scanf("%d",&n);
	printf("Enter salary of %d employees : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&s[i]);	
		if(s[i]>=40000 && s[i]<=60000)
			c++;	
	}	
	printf("No. of employees receiving salary between 40,000 and 60,000 = %d",c);
}
