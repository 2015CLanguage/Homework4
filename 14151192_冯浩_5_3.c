#include<stdio.h>
int main()
{
	int m,n,M,N,Y,a,b;
	printf("请输入两个正整数：m,n\n");
	scanf("%d,%d",&m,&n);
	if(m==n)
		{a=m;
		b=m*n;}
	else
	{if(m>n)
		{M=m;
		 N=n;}
	 else
		{M=n;
		 N=m;}
	 Y=M%N;
	 while(Y!=0)
	 {
		M=N;
		N=Y;
		Y=M%N;
	 }
	 a=N;
	 b=m/N*n;
	}
	printf("两正整数的公约数为：%d\n",a);
	printf("两正整数的公倍数为：%d\n",b);
	return 0;
}
