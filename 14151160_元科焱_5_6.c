#include<stdio.h>
int main()
{
	double a=0,b=1,c=1;
    printf("请输入一个数n:");
	int n;
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
	    b=b*c;
	    a=a+b;
	}
	printf("1!+2!+...+n!=%22.15e\n",a);
	return 0;
}
