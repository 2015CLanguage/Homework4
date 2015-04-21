#include<stdio.h>
int main()
{
	int m,n,i,j,a,b,c,d;
	printf("请输入两个整数（例如“4,6”）\n");
	scanf("%d,%d",&m,&n);
	d=m*n;
	if(m==n){
		printf("最大公约数为%d,最小公倍数为%d。\n",m,m);}
	else
		if(m<n){
			a=n;
		    n=m;
		    m=a;} //m>n
	for(i=1;i<=n;i++)
	{
		if(m%i==0&&n%i==0){
			b=i;}
	}
	for(j=m;j<=d;j++)
	{
		if(j%m==0&&j%n==0){
			c=j;}
	}
	printf("最大公约数为%d,最小公倍数为%d\n",b,c);
	return 0;
}
