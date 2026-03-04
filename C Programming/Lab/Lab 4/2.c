//display, sum & average
#include<stdio.h>
void main()
{
	int a[100],n,i,s=0;
	float avg;
	printf("Enter no. of numbers : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	avg=(float)s/n;
	printf("The numbers are : \n");
	for(i=0;i<n;i++)
		printf("%-3d",a[i]);
	printf("\nSum = %d\nAverage = %.2f",s,avg);
}
