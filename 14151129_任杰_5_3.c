#include<stdio.h>
void main()
{
	int m, n,a,i,h,x,y;
	printf("请输入两个正整数\n");
	scanf_s("%d%d", &m, &n);
	if (m < n)
	{
		a = m;
		m = n;
		n = a;
	}
	i = 1;
	while (i<=n)
	{
		if (m%i == 0 && n%i == 0)
			x = i;
		i++;

	}
	printf("最大公约数为%d\n", x);
	h = m;
	while (h <= (m*n))
	{
		if (h%m == 0 && h%n == 0)
		{
	    	y = h;
			break;
    	}

			h = h + 1;
	}
	printf("最小公倍数为%d\n", y);
}
