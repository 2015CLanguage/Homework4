#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a=1,b=0;
	printf("请在下方输入一个正整数:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
		b=b+a;
	}	
    printf("阶乘之和为%d\n",b);
	return 0;
}
