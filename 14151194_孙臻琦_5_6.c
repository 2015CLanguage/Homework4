#include <stdio.h>
int main()
{
	int m,s=0,i=1;
	printf("请输入一个正整数m：");
    scanf("%d",&m);
	int n;
	for (n=1;n<=m;n++)
	{
		i=i*n;
		s=s+i;
	}
	printf("1!+2!+...+m!=%d\n",s);
	return 0;
}
