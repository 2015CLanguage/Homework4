#include <stdio.h>  //xt5-9

int main()
{
	int i,p;
	printf("以下是小于1000的完数：\n\n");
	
	for(p=4;p<=1000;p++)
	{
		int sum=0,j=0;
		int listn[30]={0};                     //以防万一使用了30个长度 
		
		for(i=1;i<=(int)(p/2);i++)             //计算得出数p的所有因数之和 
		{
			if(p%i==0) {sum+=i;listn[j]=i;j++;}
		}
		if(sum==p)                             //判断数p是否为完数 
		{
		    printf("%d its factors are ",p);
			for(j=0;j<=29;j++)
			    if(listn[j]!=0){printf("%d ",listn[j]);}
			printf("\n");
		};
	 } 
	return 0;
 } 
