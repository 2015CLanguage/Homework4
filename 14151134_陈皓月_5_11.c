#include<stdio.h>
#include<math.h>
void main()
{
	float n,i,h,s;
	n=100;
	s=100;
	i=1;
	while(i<10)//计算弹起总高度
	{
		s=s+2*(n/pow(2,i));
		i=i+1;
	}
	h=n/pow(2,10);//计算第十次弹起高度
	printf("共经过%.5f米\n",s);
	printf("第十次弹起%.5f米\n",h);
}
		
