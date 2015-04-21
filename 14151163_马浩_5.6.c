#include<stdio.h>
int main()
{
	double s=0,t=1,k=1;
    printf("请输入一个数n:");
	int n;
	scanf("%d,",&n);
	for(k=1;k<=n;k=k+1)
	{
	    t=t*k;
	    s=s+t;
	}
	printf("1!+2!+...+n!=%22.15e\n",s);
	return 0;
}
