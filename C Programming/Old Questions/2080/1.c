#include<stdio.h>
int fibo(int);
int prime(int);
void main()
{
	int n,f,p;
	printf("Enter nth term : ");
	scanf("%d",&n);
	f=fibo(n);
	p=prime(f);
	if(p==0)
		printf("Neither");
	else if(p==1)
		printf("Prime");
	else if(p==-1)
		printf("Composite");
}
int fibo(int n)
{
	int a=0,b=1,c,i;
	for(i=0;i<n;i++)
	{
		
		c=a+b;
		a=b;
		b=c;
		printf("%d",a);	
	}
	return(a);
}
int prime(int f)
{
	int i;
	if(f==0 || f==1)
		return 0;
	else{
	
	for(i=2;i<=f/2;i++)
	{
		if(f%i==0)
			break;
	}
	if(i>f/2)
		return 1;
	else
		return -1;
	}
}
