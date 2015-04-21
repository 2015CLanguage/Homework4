#include<stdio.h>
void main()
{
	int m,n,t,p;
	printf("请输入正整数m,n\n");
	scanf("%d%d",&m,&n);
    p=m*n;
	while(n!=m)
	{
	if(m<n)
	{
		m=m+n;
	    n=m-n;
	    m=m-n;
	}
	    t=m-n;
        m=n;
		n=t;
	}
	printf("最大公约数为:%d\n",n);
	printf("最小公倍数为:%d\n",p/n);
}
