#include<stdio.h>
int main()
{
int a,b,i,j;
printf("请输入两个整数：");//输入初始值
scanf("%d %d",&a,&b);
for(i=1;i<=a&&i<=b;i++)
    if(a%i==0&&b%i==0)break;
printf("最大公约数为：%d",i);//输出最大公约数
for(j=1;;j++)
    if(j%a==0&&j%b==0)break;
printf("最小公倍数为：%d",j);//输出最小公倍数
return 0;
}
