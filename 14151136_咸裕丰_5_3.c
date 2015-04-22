#include"stdio.h"
int main()
{
	int m,n,t,p,q;
	printf("请输入两个正整数:");
	scanf("%d,%d",&m,&n);
	if(m<n)
	{t=m;m=n;n=t;}
	p=m*n;
	while(n!=0)
	{q=m%n;m=n;n=q;}
	printf("两数的最大公约数为:%d\n",m);
	printf("两数的最小公倍数为:%d\n",p/m);
	return 0;
}
