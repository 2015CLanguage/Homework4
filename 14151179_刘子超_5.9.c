#include<stdio.h>
void main()
{
	int i,k,s;
	for(i=2;i<=1000;i++)
	{
		s=1;
		for(k=2;k<=i-1;k++)
		{
			if(i%k==0)
				s=s+k;
		}
	
		if(i==s)
		{
			printf("%d",i);
			printf("its factors are ");
			for(k=1;k<i;k++)
		{
			if(i%k==0)
			{
				printf("%d,",k);
			}
		}
		printf("\n");
	

	}	
	}
}
