#include<stdio.h>
void main()
{
    int n,m,i,j;
    for (n=2;n<1000;n++)
    {
        m=0;
        for (i=1;i<n;i++)
       {
            if ((n%i)==0)
            m=m+i;
        }
        if (m==n)
        {
            printf ("%d,its factors are",n);
            for (j=1;j<1000;j++)
                if((m%j)==0)
                  printf("%d ",j);
           printf("\n");
       }


    }

}
