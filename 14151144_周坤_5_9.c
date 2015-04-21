# Homework4
#include<stdio.h>
int main()
{
	int i,n,sum;
	for(n=2;n<1000;n++)                             /*对1000之内的整数进行测试*/
	{sum=0;
	for(i=1;i<n;i++)     
		if((n%i)==0)
			sum+=i;
		if (sum==n)                                 /*判断是否为完数*/
		{printf("%d,its factors are",n);            /*按照格式要求输出*/
		for(i=1;i<n;i++)
			if(n%i==0)                              /*判断因子*/
				printf("%d ",i);                     /*输出每个因子*/
			printf("\n");                           /*输出换行符号，便于区分两次结果*/
		}
	}
	return 0;
}
