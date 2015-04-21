#include <stdio.h>
int main()
{
	int m,n,t,r,p;
	printf("请输入正整数n和m:");
	scanf("%d,%d",&n,&m);
	if(n<m) 
	{
    t=n;
    n=m;
	m=t;
	}
    p=n*m;
	while(m!=0)
	{
	r=n%m;
	n=m;
	m=r;
	}
	printf("最大公约数是:%d\n",n);
	printf("最小公倍数是:%d\n",p/n);
	return 0;
}
