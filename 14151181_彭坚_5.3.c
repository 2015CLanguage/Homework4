#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,temp,i,p,c,e,k;
	printf("请在下方输入两个正整数,以逗号隔开:\n");
	scanf("%d,%d",&m,&n);
	if(m>=n)
	{
		temp=n;
		n=m;
		m=temp;
	}
	p=n*m;
    for(i=1;i<=m;i++)
	{
		k=i*i;
		if(p%k==0)
		c=i;
	}
	e=p/c;
	printf("最大公约数为%d\n",c);
	printf("最小公倍数为%d\n",e);
	return 0;
}
