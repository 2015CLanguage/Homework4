#include<stdio.h>
void main()
{
	int n;
    for(n=2;n<=1000;n++)
	{
	    int s=0,i;
		for(i=1;i<n;i++)
		{
		    if(n%i==0)
				s=s+i;
		}
		if(n==s)
		{
		    printf("%d its factors are",n);
			for(i=1;i<n;i++)
			{
		        if(n%i==0)
				    printf(",%d",i);
			}
			printf("\n");
		}
		
	}
}
