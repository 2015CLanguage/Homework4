#include<stdio.h>
int a, b, c;
int main()
{
	printf("请输入两个正整数a，b：\n");
	scanf("%d, %d", &a, &b);
	printf("两个数的最大公约数为：%d，最大公倍数为：%d。\n", GMC(a, b), LMC(a, b));
	return 0;
}
int GMC(a, b)
{
	while (a!=b)
		if (a>b)
			a=a-b;
		else
			b=b-a;
	return a;
}
int LMC(a, b)
{
	c=GMC(a,b);
	a=a/c;
	b=b/c;
	a=a*b*c;
	return a;
}
