#include "stdafx.h"
#include "stdio.h"
#include "math.h"

int main()
{
	int m,n,t,i,a,j;
	printf("请输入两个正整数：\n");
	scanf("%d,%d",&m,&n);
	if(m>n)
	{
		t=n;
		n=m;
		m=t;
	}
	else
	{
		for(i=m;i>0;i--)
		{
			t=n%i;
			if(t==0)
				t=i;
				break;
		}
	
		a=m*n;
		for(j=n;j<a+1;j++)
		{
			if(j%m==0 && j%n==0)
				a=j;
				break;
		}
	}
	printf("这两个数的最小公倍数为%d\n",a);
	printf("这两个数的最大公约数为%d\n",t);
	return 0;
}

