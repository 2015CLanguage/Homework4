#include <stdio.h>
int main()
{int p,r,n,m,t;
printf("请输入两个正整数");
scanf("m=%d,n=%d",&n,&m);
if (n<m)
{t=n;
n=m;
m=t;}
p=m*n;
while(m!=0)
{r=n%m;
n=m;
m=r;}
printf("他们最大的公约数是%d\n",n);
printf("他们最小的公约数是%d\n",p/n);
return 0;
}
