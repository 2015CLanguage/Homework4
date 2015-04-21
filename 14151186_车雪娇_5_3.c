#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,m,n,temp;
    scanf("%d,%d",&m,&n);
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    a=n*m;
    while(m!=0)
    {
        b=n%m;
        n=m;
        m=b;
    }

    printf("它们的最大公约数为：%d\n",n);
    printf("它们的最小公倍数为：%d\n",a/n);
    return 0;
}
