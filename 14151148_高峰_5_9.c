#include<stdio.h>
int main()
{
	int i,j,a=0;
	for(i=1;i<=1000;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				a=a+j;
		}
		if(i==a)
		{
			printf("%d its factors are ",i);
			for(j=1;j<i;j++)
			{
				if(i%j==0)
					printf("%-4d",j);
			}
			printf("\n");
		}
		a=0;
	}
	return 0;
}
