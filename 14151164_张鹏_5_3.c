#include<stdio.h>
int main()
{
	int m,n,a,b,c;
	scanf("%d%d",&m,&n);
    c=m*n;
	if (n>m)
	{
	  a=m;
	  m=n;
	  n=a;
	}
	do
	{
		b=m%n;
		m=n;
		n=b;
	}while(n!=0);
	c=c/m;
	printf("最大公约数%d\n",m);
	printf("最小公倍数%d\n",c);
	return 0;
}

