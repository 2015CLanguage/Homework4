#include<stdio.h>
main()
{
	int m,n,a,b,c,i;
	printf("请输入两个整数m,n:");
	scanf("%d,%d",&m,&n);
	c=m*n;
	if(m<n)
	{
		n=m+n;
		m=n-m;
		n=n-m;
	}
	for(i=n;i>=1;i--)
	{
		a=m%i;
		b=n%i;
		if(a==0&&b==0)
			break;
	}
	printf("其最大公约数为%d,最小公倍数为%d\n",i,c/i);
}
