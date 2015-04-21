# include<stdio.h>
int main()
{
	int a,b,c,m,n;
	printf("请输入两个正整数：");
	scanf("%d,%d",&m,&n);
	if (n<m)
	{
		a=n;
		n=m;
		m=a;
	}
	b=m*n;
	while(m!=0)
	{
		c=n%m;
		n=m;
		m=c;
	}
	printf("最大公约数为：%d\n",n);
	printf("最小公倍数为：%d\n",b/n);
	return 0;
}
