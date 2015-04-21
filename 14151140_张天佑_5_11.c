#include<stdio.h>
void main()
{
	float sum=100,h=sum/2;
	int n;
	for(n=2;n<=10;n+=1)
	{
		sum=sum+2*h;                  //循环实现求和与累除
		h=h/2;
	}
	printf("第十次落地时，共经过%f米\n",sum);  //输出结果
	printf("第十次落地后，反弹%f米\n",h);
}
