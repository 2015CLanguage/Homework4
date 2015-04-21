#include<stdio.h>
int main()
{
	double i=0,j=1;
	
	int k,n;
    printf("请输入n的值（整数）：");   
	scanf("%d",&n);   //接受终端输入n的值
	for(k=1;k<=n;k++)
	{
		j=j*k;   //分别求数字1、2、3、...、n的阶乘，并把阶乘相加
		i=i+j;
	}
	printf("所求的值为：%22.15e\n",i);   //打印计算结果
	return 0;
}
