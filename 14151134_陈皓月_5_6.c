#include<stdio.h>
void main()
{
	int i,n,s,sum;
	n=1;
	i=1;
	s=1;
	sum=0;
	while(n<=20)
	{
		while(i<=n)//计算n的阶乘
			{
			s=s*i;
			i=i+1;
			}
		n=n+1;
		sum=sum+s;//将计算得到的数字累加
	}
	printf("和为%d\n",sum);//输出结果
}
