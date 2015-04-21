# include<stdio.h>
int main(void)
{
	int i,j,sum;
	
	for(i=1;i<=1000;i++)//用for循环一个一个试验1000以内的数
	{
		for(j=1,sum=0;j<i;j++)//看其因子相加之和
		{
			if(i%j==0)
				sum=sum+j;
			
		}
			if(sum==i)//判断和与该数是否相等
			{
				printf("%d its factors are",sum);
				for(j=1;j<i;j++)//将因数输出
				{
					if(sum%j==0)
					{
						printf("%d ",j);
					}
			
				}
				printf("\n");

			}
			
		
	}
	return 0;
}
