#include<stdio.h>
int main()
{
int s=0,a=1;
int b;
for(b=1;b<=5;b++)
{
	a=a*b;
	s=s+a;
}
printf("原式的和为：%d\n",s);
return 0;
}
