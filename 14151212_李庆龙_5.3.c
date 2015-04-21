# include<stdio.h>
int main()
{
	int m,a,b, n,t,p,i;
	printf("print two numbers:");
	scanf_s("a=%d,b=%d", &m, &n);
	a=m;
	b=n;
	for (i = 0; i < m; i++)
	{
		if (m>n)
		{
			p = m%n;
			if (p == 0)
			{
				printf("%d 和 %d 的最大公约数为：", a, b);
				printf("%d", n);
				break;
			}
			else
			{
				m = n;
				n = p;
			}
		}
		else
		{
			t = m;
			m = n;
			n = t;
			p = m%n;
			if (p == 0)
			{
				printf("%d 和 %d 的最大公约数为：", m, n);
				printf("%d", n);
				break;
			}
			else
			{
				m = n;
				n = p;
			}
		}
	}
	printf("\n");
	printf("最小公倍数为:%d", a*b / n);
	system("pause");
}
