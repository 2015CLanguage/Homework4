#include<stdio.h>
int main()
{
	int s=0,a=1,m,n;
	printf("请输入正整数n:");
	scanf("%d,",&n);
for(m=1;m<=n;m++)
{
	a=a*m;
	s=s+a;
}
printf("原式的和为：%d\n",s);
return 0;
}
