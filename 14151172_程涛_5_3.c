#include <stdio.h>
void main()
{
	int m,n,p,q,t,l;
	printf("请输入正整数m,n\n");
	scanf("%d,%d",&m,&n);
	t=m;
    l=n;
	while(m-n!=0)
	{
		if(m<n) m=m,n=n-m;
	    if(m>n) n=n,m=m-n;
	}
	p=m;
	q=t*l/p;
	printf("两个数的最大公约数为%d,最小公倍数为%d\n",p,q);
}
