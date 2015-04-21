#include<stdio.h>
void main()
{
	int n,sum,i;
	for (n=2;n<=1000;n+=1)      //对所有数计算遍历
	{
		sum=0;
		for (i=1;i<n;i+=1)
			if((n%i)==0)             //找出所有因子并求和
				sum+=i;
		if(sum==n)                    //如果是完数则输出所有因子
		{	printf("%d its factors are ",n);
		    for (i=1;i<n;i+=1)
				if((n%i)==0)
					printf("%d ",i);
			printf("\n");
		}
		
	}
}
