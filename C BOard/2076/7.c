#include<stdio.h>
void main()
{
	int n,i=1,j,k=1;
	printf("Enter nth term : ");
	scanf("%d",&n);
	while(i<=n)
	{
		k++;
		for(j=2;j<=k/2;j++)
			if(k%j==0)
				break;
		if(j>k/2)
		{
			printf("%6d",k);
			i++;
		}
	}
}
