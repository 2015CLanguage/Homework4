#include<stdio.h>
void main()
{
	int num,i,j,sum;
	int data[31];//建立一个数组来储存因子，由于1000以内因子包括自己最多为32个，故数组中元素为32-1=31个
	for(num=2;num<1000;num++)
	{
		sum=0;
		for(i=1,j=0;i<=(num/2);i++)
			if((num%i==0))
			{
				data[j]=i;
				sum=sum+i;
				j++;//j来统计数组中元素个数
			}
		if(sum==num)
		{
			printf("%d its factors are ",num);
			for(i=0;i<j-1;i++)//带逗号输出数组中前j-1个元素
				printf("%d, ",data[i]);
			printf("%d.\n",data[j-1]);//带句号输出最后一个元素
		}
	}
}
