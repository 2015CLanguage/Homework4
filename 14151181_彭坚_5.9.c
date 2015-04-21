#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,a;
	for(i=2;i<1000;i++)
	{
		a=0;
		for(j=1;j<i;j++)
			if((i%j)==0)
				a=a+j;
		if(a==i)
		{
			printf("%d its factors are",i);
	    	for(j=1;j<i;j++)
			    if((i%j)==0)
			    	printf("%d ",j);
				printf("\n");
		}
	}
    return 0;
}
