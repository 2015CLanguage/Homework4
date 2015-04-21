#include<stdio.h>
int main()
{
	int m,i,j;
	for(m=1;m<1000;m++)   //标定“完数”m的寻找范围
	{
		j=0;
		for(i=1;i<m;i++)   //找出m的因子（即能整除m的整数），并将因子相加
			if((m%i)==0)
				j=i+j;
			if(j==m)   //若因子和数恰好与数m相等，则确定m为一个“完数”
			{
				printf("%d,its factors are",m);   //将“完数”m打印出来
				for(i=1;i<m;i++)
					if(m%i==0)   //将m的每一个因子打印出来
						printf(" %d ",i);
					printf("\n");
			}
	}
	return 0;
}
		
