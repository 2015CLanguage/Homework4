#include<stdio.h>
void main()
{
	int n,i,s,k;
		n=2;
	while(n<1000)//遍历1000以内的所有数字
	{
		s=0;
		i=1;
		while(i<n)
		{
			if(n%i==0)//判断数字n是不是完数
				s=s+i;
			i=i+1;
		}
		if(s==n)
		{
			printf("%d its factors are ",n);
			for(k=1;k<n;k++)
				if(n%k==0)
					printf("%d,",k);//输出完数的因子
				printf("\n");
		}
		n=n+1;
	}
}
