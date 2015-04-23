Enter file contents here
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum;
    for(n=2;n<1000;n++)
    {
        sum=0;
        for(i=1;i<n;i++)
          if(n%i==0)//判断条件是否满足
          sum=sum+i;//如果满足，叠加
          if(sum==n)//判断sum=n,是否成立
         {
             printf("%d ,its factor are ",n);//输出完数
             for(i=1;i<n;i++)//输出因子
              if(n%i==0)
              printf("%d ",i);
             printf("\n");//换行
         }
    }
    return 0;
}
