#include <stdio.h>
int main()
{
	int m,n,t,r,s;
	printf("请输入两个正整数:");
	scanf("%d,%d,",&m,&n);
	s=m*n;
if(m<n)
{
	t=m;
	m=n;
	n=t;
}
while(r!=0)
{
	r=m%n;
	m=n;
	n=r;
}
printf("这两个数的最大公约数是:%d\n",m);
printf("这两个数的最小公倍数是:%d\n",s/m);
return 0;
}
