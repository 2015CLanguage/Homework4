#include<stdio.h>
int main()
{
	int s,i,j;
	for(i=2;i<=1000;i++)
	{
		s=1;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
				s=j+s;
		}
		if(i==s)
		{
			printf("%d ",i);
		    printf("its factaors are 1");
		    for(j=2;j<=i-1;j++)
			{
			    if(i%j==0)
				    printf(",%d",j);
			}
			printf("\n");
			return 0;
		}
	}
}
