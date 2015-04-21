#include <stdio.h>
int main()
{
	int n,s,r,i;
	printf("请输入n:");
	scanf("%d",&n);
	r=1;
	s=1;
	for(i=2;i<n+1;i++)
	{
		r=r*i;
		s=s+r;
	}
	printf("和为:%d\n",s);
	return 0;
}
