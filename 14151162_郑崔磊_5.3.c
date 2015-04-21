#include<stdio.h>
int main()
{
	int p,r,n,m,temp;
	printf("请输入两个正整数m,n:");
    scanf("%d,%d",&m,&n);
	if(m<n)
	{	temp=n;
		n=m;
		m=temp;
	}
	p=m*n;
	do
	{r=m%n;
	 m=n;
	 n=r;
	}
	while(r==0);
	printf("最大公约数是:%d\n",n);
	printf("最小公倍数是:%d\n",p/n);
	return 0;
}
