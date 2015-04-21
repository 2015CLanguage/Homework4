#include<stdio.h>
int main()
{
	int m,n,a,GMC,LMC;
	printf("请输入两个正整数m,n:");
	scanf("%d,%d,",&m,&n);
	a=m*n;
	while(m!=n)
	{
		if(m<n)
			n=n-m;
		else
			m=m-n;
	}
	GMC=m;
	LMC=a/m;
	printf("最大公约数为：%d\n",GMC);
    printf("最小公倍数为：%d\n",LMC);
return 0;
}
