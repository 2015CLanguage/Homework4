Enter file contents here
#include<stdio.h>
#include<math.h>
int main()
{
	int n=2;//定义次数
	float h,sum;//定义浮点类型的反弹高度和经历总高度
	sum=100;//第一次落地的高度
	h=50;//第一次的反弹高度
	while(n<=10)//当n<=10时，进行如下循环
	{
	  sum=sum+2*h;
	   h=h/2;
	   n=n+1;
	}
    printf("球在第十次落地时，共经过：%f米\n",sum);//输出结果
    printf("球在第十次反弹了%f米\n",h);

    return 0;
}
