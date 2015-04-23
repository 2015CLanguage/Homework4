#include<stdio.h>
int main()
{
	int m, n,t,i;
	scanf("%d%d", &m, &n);
	if (m < n)t = m;
	else t = n;
	while (m%t != 0 || n%t != 0)
		t = t - 1;
	i = m*n / t;
	printf("最大公约数=%d\n最小公倍数=%d\n", t,i);
	return 0;

}
