Enter file contents here
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,x1,x2;
    printf("请输入所要求平方根的数字：\n");//请用户输入数据
    scanf("%f",&a);
    x1=sqrt(a);//x1和x1的递推关系
    x2=(x1+a/x1)/2;
    b=fabs(x2-x1);
    while (b>=1e-5)//所要满足的条件
    {
        x1=x2;
        x2=(x1+a/x1)/2;
        b=fabs(x2-x1);
    }
	printf("所求平方根的值为：%f\n",x2);
    return 0;
}
