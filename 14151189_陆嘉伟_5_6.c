#include<stdio.h>
int main()
{
int a,s,n,t;
a=1;
s=0;
printf("输入n的值：");
scanf("%d",&n);
for(t=1;t<n;t++)
{
    a=a*t;
	s=s+a;
}
printf("1!+2!+...+n!=%d\n",s);
return 0;
}

