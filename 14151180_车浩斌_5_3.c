# include <stdio.h>
int main()
{
	int x,y,z,m,n;
	printf("请输入两个正整数m,n:");
    scanf("%d,%d,",&m,&n);
	if (n<m)
	{
		z=n;
		n=m;
		m=z;
	}
	x=n*m;
	while(m!=0)
	{
		y=n%m;
		n=m;
		m=y;
	}
	printf("最大公约数为:%d\n",n);
    printf("最小公倍数为:%d\n",x/n);
	return 0;
}
