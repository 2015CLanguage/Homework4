#include<stdio.h>
void main()
{
	printf("输入两个正整数:\n");    //输入两个正整数
	int m, n, r, a, b;
	scanf("%d%d", &m, &n);
	if (m < n)                     //对输入的数字进行排序
	{
		a = n;
		n = m;
		m = a;
	}
	b=m*n;
	while (n!=0)            //辗转相除法求最大公约数
	{
		r = m%n;
		m=n;
		n=r;
	}
	printf("两个数的最大公约数为:%d\n",m);          //输出结果
	printf("两个数的最小公倍数为:%d\n",b/m);
}
