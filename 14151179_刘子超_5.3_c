#include<stdio.h>
void main()
{
	int m,n,x,t,a,b,z;
	scanf("%d,%d",&m,&n);
    if (m<n)
	{t=m;
	m=n;
	n=t;
	}
	a=m;
	b=n;
	x=a%b;
	while (x!=0)
	{a=b;
	b=x;
	x=a%b;
	}
	z=m*n/b;
    printf("最大公约数%d",b);
	printf("最小公倍数%d",z);
}
