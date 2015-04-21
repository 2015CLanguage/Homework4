#include<stdio.h>
int main()
{
	int m,n,t,i,m1,n1,a,b=1;
	printf("请输入两个整数m,n:");
	scanf("%d%d",&m,&n);
	if(m<n){
		t=m;
		m=n;
		n=t;
	}
	m1=m;
	n1=n;
	a=m%n;
	while(a!=0)
	{
		m=n;
		n=a;
		a=m%n;
	}
	for(i=2;i<=n;i++){
		if(m1%i==0&&n1%i==0){
			m1=m1/i;
			n1=n1/i;
			b=b*i;
		}
	}
	printf("最大公约数为:%d,最小公倍数为:%d",n,m1*n1*b);
return 0;}
