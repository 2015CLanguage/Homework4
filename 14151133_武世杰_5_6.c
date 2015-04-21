#include<stdio.h>
int main()
{
	int a=0,b=1,n,c;
	printf("请输入要算的阶乘和c的值：");
	scanf("%d,",&c);
	for(n=1;n<=c;n++)
	{
		b=b*n;
		a=a+b;
	}
	printf("c的阶乘和为：%d\n",a);
	return 0;
}
