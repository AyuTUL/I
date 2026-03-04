//as or des
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,temp,a[50];
	printf("Enter no. of integers (<=50) : ");
	scanf("%d",&n);
	printf("Enter %d integers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter your choice : ");
	switch(getche())
	{
		case 'a':
		case 'A':
			printf("\nAscending Order :\n");
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
			break;
		case 'd':
		case 'D':
			printf("\nDescending Order :\n");
			for(i=0;i<n-1;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[i]<a[j])
					{
						temp=a[j];
						a[j]=a[i];
						a[i]=temp;
					}
				}
			}
			break;
		default:
			printf("\nWrong choice. Choose between 'a/A' for ascending & 'd/D' for descending.");
			exit(0);
	}
	for(i=0;i<n;i++)
		printf("%-6d",a[i]);
}
