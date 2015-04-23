#include<stdio.h>
int main()
{
	int n,t,y;
	int jiecheng(int x);
	printf("请输入正整数n:\n");
	scanf("%d",&n);
	t=1;
	y=0;
	while(t<=n)
	{y=y+jiecheng(t);
	t++;}
	printf("结果为:%d\n",y);
	return 0;
}
int jiecheng(int x)
{	int s,b;
	s=1;
	if(x!=0)
		{for(b=1;b<=x;b++)
		s=s*b;}
	return(s);
}
