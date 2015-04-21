# Homework4
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int m,n,i,j,max,min;
    scanf("please input m,n");
    scanf("%d,%d",&m,&n);
    // numberal big-small judgement
    if(m>n)
    {
        max=m;
        min=n;
    }
    else
    {
        max=n;
        min=m;
    }
    //looking for the biggest common divisor
    for(i=min;i>0;i--)
    {
        if(m%i==0&&n%i==0)
        {
            printf("the biggest common divisor is锛?%d'\n",i);
            break;
        }
        
    }
    //looking for the smallest common multiple
    for(j=max;j<=m*n;j++)
    {
        if(j%m==0&&j%n==0)
        {
            printf("the smallest common multiple is:'%d'\n",j);
            break;
        }
    }
    return 0;
}
