#include<stdio.h>
int main()
{
	int s,a,i,n;
	printf("输入从1开始所要求的阶乘和的末尾数n：");
	scanf("%d,",&n);
	s=0;
	a=1;
	i=1;
	while(i<=n)
	{
		a=a*i;
		s=s+a;
		i=i+1;
	}
	printf("1!+2!+3!+...+n!=%d\n",s);
	return 0;
}
