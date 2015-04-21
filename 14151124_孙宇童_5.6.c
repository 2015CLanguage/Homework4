# include<stdio.h>

int main(void)
{
	int i,m,sum;
	for(i=1,m=1,sum=0;i<=5;i++)//利用for进行循环操作，算出1到5的阶乘并累计相加
	{
		m=m*i;
		sum=sum+m;
	}
	printf("和为%d\n",sum);
	return 0;
}
