#include<stdio.h>
void main()
{
int n,i,j;
int m=1,h=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1,m=1;j<=i;j++)	
{
m=m*j;
}
h=h+m;
}
printf("结果是:%d\n",h);
}
