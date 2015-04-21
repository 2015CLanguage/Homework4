//求m和n的最大公约数与最小公倍数
#include<stdio.h>
void main()
{
	int m,n,a,data[2];
	printf("Please input m and n.\n");
	scanf("%d,%d",&m,&n);
	data[0]=m;data[1]=n;//储存输入的m和n
	if(m<n)//使初始运算式中m>n
	{m=data[1];n=data[0];}
	while(1)//更相减损术求最大公约数
	{
		a=m-n;
		if(a>n)
			m=a;
		else if(a<n)
		{m=n;n=a;}
		else
			break;
	}
	printf("%d和%d的最大公约数为%d，最小公倍数为%d",data[0],data[1],a,data[0]*data[1]/a);
}
