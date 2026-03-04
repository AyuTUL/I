#include<stdio.h>
void main()
{
	int a[20],i,j,n,low,high,mid,key,temp;
	printf("Enter no. of integer : ");
	scanf("%d",&n);
	printf("Enter %d integers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
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
	printf("Ascending Order :\n");
	for(i=0;i<n;i++)
		printf("%6d",a[i]);
	printf("\nEnter data to be searched : ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
			break;
		else if(key<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	if(low<=high)
		printf("Search Successful.\n%d found at index %d",key,mid);
	else
		printf("Search unsuccessful.");
}
