#include<stdio.h>
int main()
{int i,sum,a;
a=1,sum=0;
for(i=1;i<=5;i++)
{
a=a*i;
sum=sum+a;
}
printf("%d\n",sum);
return 0;}
