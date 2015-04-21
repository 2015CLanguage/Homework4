# Homework4
#include<stdio.h>
int main()
{
	int i=1,n;
	double sum=0,t=1;
	printf("请输入一个整数:");
	scanf("%d",&n);
	while(i<=n)
	{
		t=t*i;
		sum+=t;
		i++;
	}
	printf("1!+2!+3!+...+n!=%22.15e\n",sum);
	return 0;
}
