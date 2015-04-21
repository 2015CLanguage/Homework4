#include<stdio.h>
void main()
{
	long a=1,b=0,i,n;
	scanf("%ld",&n);    //输入n的值
	for (i=1;i<=n;i+=1)
	{
		a=a*i;
		b=a+b;            //循环累加
	}
	printf("1!+2!+3!+…+n!=%ld\n",b);   //输出结果
}
