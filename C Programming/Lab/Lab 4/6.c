//linear search
#include<stdio.h>
void main()
{
	int a[50],i,key,n;
	printf("Enter no. of integers : ");
	scanf("%d",&n);
	printf("Enter %d integers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter integer to be searched : ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
			break;
	}
	if(i<n)
		printf("Search successful.\n%d found at position %d.",key,i+1);
	else
		printf("Search unsuccessful.\nInteger not found.");
}
