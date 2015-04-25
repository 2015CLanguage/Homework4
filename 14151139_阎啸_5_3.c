#include<stdio.h>
void main()
{
	int a,b,c,n,m;
	scanf("%d,%d",&n,&m);
	if(m<n)
	{
		a=m;
		m=n;
		n=a;
	}
	c=n*m;
	while(n!=0)
        {	
	 b=m%n;
	 m=n;
	 n=b;
	}
	printf("最大公约数%d\n最小公倍数%d\n",m,c/m);
}
