#include<stdio.h>
void main()
{
int m,n,t,i,j,a,b;
scanf("%d%d",&m,&n);
if(m>=n)
t=n;
else
t=m;
for(i=t;i>=1;i--)
	{
	a=m%i;
	b=n%i; 
	if(a==0&&b==0)
	break;
}
j=m*n;
printf("最大公约数是：%d\n",i);
printf("最小公倍数是：%d\n",j);
}
