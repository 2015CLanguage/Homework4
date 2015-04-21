#include<stdio.h>
#include<math.h>
int main()
{int i,n,s=1,m=0;
printf("请输入一个整数n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{s=s*i;
m=m+s;
}
printf("阶乘之和为%d\n",m);
return 0;
}
