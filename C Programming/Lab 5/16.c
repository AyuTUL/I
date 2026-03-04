//ascending order using function
#include<stdio.h>
void asc(int,int []);
void main()
{
	int n,i,a[100];
	printf("Enter no. of integers : ");
	scanf("%d",&n);
	printf("Enter %d integers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	asc(n,a);
}
void asc(int n,int a[])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Ascending Order :\n");
	for(i=0;i<n;i++)
		printf("%-6d",a[i]);
}
