#include <stdio.h>  //xt5-6 

int main()
{
	long a,s=0,n;
	printf("输入阶乘位数(小于10)：");
	scanf("%d",&n);
	
	int i,j;
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			a=a*j;
		}
		s+=a;
	}
	printf("%ld的阶乘是 。。。。%ld\n",n,a);
	printf("1到%ld的阶乘之和等于%ld\n",n,s);
	
	return 0;
 } 
