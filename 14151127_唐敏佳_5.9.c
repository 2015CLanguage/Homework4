#include "stdafx.h"
#include "stdio.h"
#include "math.h"

int main()
{
	int i,j,s[30],a=0,k,m;

	for(i=2;i<1001;i++)
    {
        for(k=0;k<30;k++)
		s[k]=0;
		m=0;
        for(j=1;j<i;j++)
        {
			if(i%j==0)
            {
                s[m]=j;
				m=m+1;
            }
        }
        for(k=0;k<m+1;k++)
            a=a+s[k];
        if(a==i)
        {
            printf("%d its factors are ",i);
            for(k=0;k<30;k++)
				if(s[k]!=0)
                    printf(" %d ",s[k]);
            printf("\n");
        }
        a=0;
    }

	return 0;
}
