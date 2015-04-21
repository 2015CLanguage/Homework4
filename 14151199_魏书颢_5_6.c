#include"stdio.h"
int main()
{
	double t,s;
	int n,i;
	printf("请输入n的值：");
	scanf("%d",&n);
	s=0,t=1;
    for(i=1;i<=n;i=i+1)
	{
		t=t*i;
		s=s+t;
	}
	printf("1!+2!+...+n!=%e\n",s);
	return 0;
}
