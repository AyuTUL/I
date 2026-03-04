//linear search
#include<stdio.h>
void main()
{
	int a[]={3,-35,0,34,78,23,65,256},i,key;
	printf("Enter integer to be searched : ");
	scanf("%d",&key);
	for(i=0;i<8;i++)
	{
		if(key==a[i])
			break;
	}
	if(i<8)
		printf("Search successful & found at %d position.",i+1);
	else
		printf("Search unsuccessful");
}
