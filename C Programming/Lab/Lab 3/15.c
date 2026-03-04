//prime numbers from 1-100
#include<stdio.h>
void main()
{
	int i,f=0,j;
	printf("Prime Numbers from 1 - 100 :\n");
	for(i=2;i<=100;i++)
	{	
		f=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				f++;	
				if(f>1)
				break;		
			}	
		}
		if(f==1)
			printf("%d\t",i);
	}
}
