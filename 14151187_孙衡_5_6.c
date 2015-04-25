#include<stdio.h>
int main()
{
int n,m=1,i,j=0,k;
n=5,j=0;//设定变量
for(i=1;i<=n;i++)
{for(k=1;k<=i;k++)
m=k*m;
j=j+m;
m=1;}
printf("%d",j);//输出结果
return 0;
}
