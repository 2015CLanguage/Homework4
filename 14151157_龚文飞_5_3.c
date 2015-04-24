#include"stdio.h"
void main()
{
	int m,n,t,a,b;
	printf("请输入两个正整数m和n\n");
	scanf("%d,%d",&m,&n);
	b=m*n;
	if(m<n)
	{
		t=m;
	    m=n;
	    n=t;
	}
    	a=m%n;
	while(a!=0)
	{
	    m=n;
		n=a;
		a=m%n;
	}
	printf("最大公约数为%d\n",n);
	printf("最小公倍数为%d\n",b/n);
	
	
}
