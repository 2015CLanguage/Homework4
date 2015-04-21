#include <stdio.h>   //xt5.3

int main()
{
	int m,n,a,b,mlp;
	printf("输入两个正整数，以英文逗号隔开：");
	scanf("%d,%d",&m,&n);
	
	mlp=m*n;
	if(n>m){a=m;m=n;n=a;}
	while(n!=0)
	{
		b=m%n;m=n;n=b;      //欧几里德的辗转相除。 
	}
	printf("两数最大公约数：%d\n",m);
	printf("两数最小公倍数：%d",mlp/m);     //基于 两数乘积是两数最小公倍数与最大公约数之积 
	return 0;
 } 
