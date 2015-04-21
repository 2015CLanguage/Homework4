#include<stdio.h>
main()
{
	int n,i,p=1,s=0;
	printf("请输入一个整数n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=p*i;
		s=s+p;
	}
	printf("1!+2!+...+n!=%d\n",s);
}
