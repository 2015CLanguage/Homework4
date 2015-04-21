#include<stdio.h>
#include<math.h>
int main()
{int m,n,t,s,p,q,c;
printf("请输入两个正整数m,n");
scanf("%d,%d",&m,&n);
if(m<n)
{t=m;
m=n;
n=t;
}
p=m;
q=n;
while(m>n)
{s=m-n;
if(s>n)
m=s;
else
{m=n;
n=s;}
}
c=p*q/m;
printf("最大公约数是%d\n",m);
printf("最小公倍数是%d\n",c);
return 0;
}
