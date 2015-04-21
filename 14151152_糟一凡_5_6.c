#include"stdio.h"
int main()
{
	long n, i, j, s, t=0;
	printf("请输入一个n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=1;
		for(j=1;j<=i;j++)
		{
			s=s*j;
		}
		t=t+s;
	}
	printf("结果为:%d\n",t);
	return 0;
}
