#include<stdio.h>
int main()
{
float t,h=100,s=0;//定义变量
for(t=1;t<=10;t++)
{
s+=h*1.5;
h*=0.5;
}
printf("第十次落地时共经过%f米，反弹%f米",s-h,h);  //输出结果
return 0;
}
