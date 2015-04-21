#include"stdio.h"
int main()
{
	int m,n,t,p,r;
	printf("Please input two number:\n");
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",&m);
	if (m<n)
	{t=m;m=n;n=t;}
	p=n*m;
	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	
	printf("最大公约数是%d\n",m);
	printf("最小公倍数是%d\n",p/m);
return 0;	
}
