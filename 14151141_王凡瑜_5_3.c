#include<stdio.h>

int HCD(int m,int n);

void main()
{
    int m,n,hcd;
	printf("Please input two integers with a space as the separator\n");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
	    int temp=n;
		n=m;
		m=temp;
	}
	hcd=HCD(m,n);
	printf("The highest common divisor is %d\n",hcd);
	printf("The lowest common multiple is %d\n",m*n/hcd);
}

int HCD(int m,int n)
{
	int temp;
    while(n!=0)
	{
	    temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}
