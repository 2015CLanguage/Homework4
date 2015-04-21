#include<stdio.h>
int main()
{
	int s=0,t=1,n,x;
	printf("请输入n的值:");
	scanf("%d,",&n);
	for(x=1;x<=n;x=x+1)
	{
		t=t*x;
		s=s+t;
	}
	printf("原式的结果为:%d\n",s);
	return 0;
}
