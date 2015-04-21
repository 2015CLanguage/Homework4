#include <stdio.h>
int main()
{
    int m,n,p,q,r;
	printf("请输入两个正整数n,m\n");
    scanf("%d,%d",&n,&m);
	if(n<m)
	{
		q=n;
		n=m;
		m=q;
	}
	p=m*n;
	while(m!=0)
	{
	    r=n%m;
		n=m;
	    m=r;	    
	}
	q=p/n;
	printf("两数的最大公约数为%d\n",n);
	printf("两数的最小公倍数为%d\n",q);
	return 0;
}
