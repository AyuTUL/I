#include<stdio.h>
void main()
{
	int a[10]={3,6,124,436,423,1,52,1,-235,0},temp,i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Ascending Order:\n");
	for(i=0;i<10;i++)
		printf("%6d",a[i]);
}
