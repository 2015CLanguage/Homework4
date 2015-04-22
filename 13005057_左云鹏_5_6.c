#include<stdio.h>
int main()
{	int n,m;//n计数，m接收输入
	double s=0,t=1;
	printf("请输入正整数m:");
	scanf("%d",&m);
	for (n=1;n<=m;n++)//t存放累乘，s存放和
		{
			t=t*n;
			s=s+t;

		}
	printf("1!+2!+...+%d!=%22.15e\n",m,s);
	return 0;
}
