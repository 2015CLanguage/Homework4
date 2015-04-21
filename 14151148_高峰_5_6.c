#include<stdio.h>
int main()
{
	int i,j,a=1,b=0,n;
	printf("请输入一个数n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			a=a*j;
		b=b+a;
		a=1;
	}
	printf("阶乘的和为%d\n",b);
	return 0;
}
