#include<stdio.h>
int main()
{
	int m,n,t,rem,m1,n1;
	printf("输入两个整数m,n（用逗号隔开）：");   //接收终端输入的m,n的数值
	scanf("%d,%d",&m,&n);
	if(n<m)   //对m与n进行大小排序，使m<n
	{
		t=n;
		n=m;
		m=t;
	}
	m1=m,n1=n;   //保留m与n的原始值
	while(m!=0)   //循环相除找出最大公约数
	{
		rem=n%m;
		n=m;
		m=rem;
	}
	printf("m与n的最大公约数为%d\n",n);   //将最先能被整除的数打印，该数即为m与n的最大公约数
	printf("m与n的最小公倍数为%d\n",m1*n1/n);   //将m与n原始值的积除以最大公约数的值打印，该值即为m与n的最小公倍数
	
	
	return 0;
}
