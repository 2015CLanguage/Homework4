#include<stdio.h>
int main()
{
int m,n,t,p,a;
printf("输入两个数m,n：");
scanf("%d,%d,",&m,&n);
a=m*n;
if(m<n)
{	t=m;
	m=n;
	n=t;
}
while(m%n!=0)
{
	p=m%n;
	m=n;
	n=p;
	if(m<n)
{		t=m;
		m=n;
		n=t;
}
}
printf("最大公约数是：%d\n",n);
printf("最小公倍数是：%d\n",a/n);
return 0;	
}
