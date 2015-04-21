include <stdio.h>
void main()
{
	int i,n,p,q,m=0;
	printf("请输入正整数n\n");
	scanf("%d",&n);
	for (p=1;p<=n;p++)
	{   q=1;
		for (i=1;i<=p;i++)
		    q=q*i;
		m=m+q;
	}
	printf("阶乘和为%d\n",m);
}
