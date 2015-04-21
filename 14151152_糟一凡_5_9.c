#include"stdio.h"
int main()
{
	int i,j, r,s,k;
	for(i=1;i<=1000;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			r=i%j;
			if(r==0)
			{
				s=s+j;
			}
		}
		if(s==i)
		{
			printf("%d ",i);
			printf("its factors are ");
			for(k=1;k<i;k++)
			{
				r=i%k;
			    if(r==0)
				{
					printf("%d ",k);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
