# include<stdio.h>
int main()
{
	int m,n,k,p,i;
	printf("输入m,n:");
	scanf("%d,%d",&m,&n);
	p=m*n;
	if (m<n)
	{
		k=n;
		n=m;
		m=k;
	}
	while(n!=0)
	{
		i=m%n;
		m=n;
		n=i;
	}
	
	printf("最大公约数为%d\n",m);
	printf("最小公倍数为%d\n",p/m);
	return 0;
}
