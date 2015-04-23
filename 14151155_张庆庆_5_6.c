Enter file contents here
#include<stdio.h>
#include<math.h>
int main()
{
	int i,sum,n,t;//定义类型，赋初值
	sum=0;
	t=1;
	i=1;
	n=6;
	while(i<=6)//循环关系
	{
		t=t*i;
		sum=sum+t;
	    i=i+1;
	}
	printf("所求阶乘和为:%d\n",sum);
    return 0;
}
