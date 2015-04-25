#include"stdio.h"
#include "math.h"
int main()
{
	int i,j,s;

	for(i=1;i<=1000;i=i+1)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(fmod(i,j)==0)
			{
				s=s+j;
			}
		}
		if(s==i)
			{
			printf("%d its factors are",i);
			for(j=1;j<i;j++)
				{
				if(fmod(i,j)==0)
				printf("%4d",j);
				}
				printf("\n");
	        }
	}
	return 0;
}
