//count prime numbers from 1 to n
#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,j,f=0;
	printf("Enter nth term : ");
	scanf("%d",&n);
	printf("Prime Numbers from 1 - %d :\n",n);
	for(i=2;i<=n;i++)
	{
		f=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				f++;
		}
		if(f==0)
			printf("%d\t",i);
	}
}
