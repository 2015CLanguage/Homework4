#include <stdio.h>
int main ()
{
	int a,b,c,m,p,r;
	int i=0;
	printf("输入两个整数a，b\n");
	scanf("%d,%d",&a,&b);
	if (a<b)
	{
		 m=a;
		 a=b;
		 b=m;
	}
	p=a*b;
	while (b!=0 && i<b)
	{
		c=b-i;
		r=a%c;
		if (r==0) break;
		i=i++;
	}
	printf("最大公因数为%d\n",c);
	printf("最小公倍数为%d\n",p/c);
	return 0;
}

