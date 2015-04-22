#include "stdafx.h"
#include "stdio.h"

int main()
{
	int n,i,j,a=0,b=1;
	printf("请输入n:\n");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<i+1;j++)
			b=b*j;
		a=a+b;
		b=1;
	}
	printf("所得结果为：%d\n",a);
	return 0;
}

