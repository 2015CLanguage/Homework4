#include<stdio.h> 
main()
{
	int a,b,c,n,m;
	scanf("%d%d",&n,&m);
	if(m<n)
	{
		a=m;
		m=n;
		n=a;
	}
	c=m*n;
	while(n!=0)
	{
		b=m%n;
		m=n;
		n=b;
	}
	printf("公约数为%d\n公倍数为%d\n",m,c/m);
 } 
