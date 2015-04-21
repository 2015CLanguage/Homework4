#include"stdio.h"
int main()
{
	int m,n,t,r,p,x;
	printf("请输入两个正整数m,n:");
	scanf("%d,%d,",&m,&n);
        p=m*n;
        if(n>m)
	{ 
	   t=n;
	   n=m;
	   m=t;
	}
	while(n!=0)
	{ 
		r=m%n;
		m=n;
		n=r;
	}
x=p/m;
printf("最大公约数为：%d\n",m);
printf("最大公倍数为：%d\n",x);
return 0;
}
