#include<stdio.h>
int main()
{
	int i,m,s;
	for(i=2;i<1000;i=i++)
	{   s=0;
		for(m=1;m<i;m=m++)
			if(i%m==0)
				s=s+m;
			if(s==i)
				{printf("%d,its factors are",i);
		for(m=1;m<i;m++)
			if(i%m==0)
				printf("%d ",m);
			printf("\n");} 
	}
	return 0;
}
