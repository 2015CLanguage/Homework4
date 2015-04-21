#include<stdio.h>
void main()
{
    int n;
	double i,j,t,s;
    printf("请输入正整数n\n");
	scanf("%d",&n);
	for(s=0,i=1;i<n+1;i++)
	{
		for(j=i,t=1;j>0;j--)
			t=t*j;
		s+=t;
	}
	printf("1!+2!+...+n!结果为:%lf\n",s);
}
