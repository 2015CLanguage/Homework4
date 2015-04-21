#include<stdio.h>
int main()
{int a,b,m,n,r;
 printf("请输入两个正整数:\n");
 scanf("%d%d",&m,&n);
 if(m>n)
 {
  a=m;
  b=n;
 }
 else
 {
  a=n;
  b=m;
 }
 do
 {
  r=a%b;
  a=b;
  b=r;
 }
 while(r!=0);
 printf("最大公约数为:%d\n最小公倍数为:%d\n",a,(m/a)*(n/a)*a);
 return 0;
}
