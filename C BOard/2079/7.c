#include<stdio.h>
void main()
{
	int a[100],i,n,l,sl;
	printf("Enter no. of integers : ");
	scanf("%d",&n);
	printf("Enter %d integers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	l=a[0];
	sl=a[i];
	for(i=1;i<n;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl && a[i!=l])
			sl=a[i];
	}
	printf("Second Largest = %d",sl);
}
