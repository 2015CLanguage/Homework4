#include "stdio.h"

void main()
{
	int m, n,t,k;
	scanf("%d%d", &m, &n);
	if (m < n)t = m;
	else t = n;
	while (m%t != 0 || n%t != 0)
		t = t - 1;
	k = m*n / t;
	printf("最大公约数为%d\n最小公倍数为%d\n", t,k);
}
