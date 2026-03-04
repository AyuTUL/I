#include<stdio.h>
void main()
{
	int n,*p,i;
	printf("Enter no. of integers : ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Allocation error.");
		return;
	}
	printf("Enter %d integers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	printf("The numbers are :\n");
	for(i=0;i<n;i++)
		printf("%-6d",*(p+i));
}
