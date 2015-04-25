#include <stdio.h>
int main()
{
    int i=1,p,q,r,n;
    for(i;i<=1000;i++)
	{
		int m[100]={0};
		r=0;
		n=0;
		for(p=1;p<i;p++)
		{
		    q=i%p;
			if(q==0)
			{    
				r=r+p;
				m[n]=p;
				n=n+1;
			}
		}
		if(r==i)
		{
		    printf("\n%d its factors are ",i);
			for(n=0;n<10;n++)
			{
			    if(m[n]!=0)
				    printf("%d ",m[n]);
				else
					break;
			}
		}
	}
	return 0;
}
