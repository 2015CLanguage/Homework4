#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,a,b,i,r,s;
	printf("请输入m=");
	scanf("%d",&m);
	printf("请输入n=");
	scanf("%d",&n);
	if(m>n)
	{
		a=m;
		b=n;
	}
	else
	{
		a=n;
		b=m;
	}
	r=a/b;
	i=a-r*b;
	while(i!=0)
	{
		a=b;
		b=i;
		r=a/b;
		i=a-r*b;
	}
	printf("最大公约数是%d\n",b);
	s=b*(m/b)*(n/b);
	printf("最小公倍数是%d\n",s);
	return 0;
}
