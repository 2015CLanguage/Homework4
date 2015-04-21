# Homework4
#include <stdio.h>

int main()
{
    int i,j,sum,k;
    for(i=1;i<=1000;i++)
    {
        for(sum=0,j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d its factors are ",i);
            for(k=1;k<i;k++)
            {
                if(i%k==0)
                    printf("%d,",k);
            }
            printf("\n");
        }
    }
    return 0;
}
