#include<stdio.h>
int main()
{
	int n,m,t,p,q;
	printf("请输入两个正整数：");
	scanf("%d,%d",&m,&n);
	if(m<n)
	   {t=m;
	    m=n;
		n=t;
	}
	q=m*n;
	while(n!=0)
	{
		p=m%n;
	    m=n;
		n=p;
	}
	printf("最大公约数为：%d\n",m);
	printf("最小公倍数为：%d\n",q/m);
	return 0;
}
