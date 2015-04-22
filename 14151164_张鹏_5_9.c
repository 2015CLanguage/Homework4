#include"stdio.h"
int main()
{
	int a,b,c;
	for(a=1;a<1000;a=a++)
	{
		c=0;
		for(b=1;b<a;b++)
		{
			if((a%b)==0)
			c=c+b;
		}
		if(a==c)
		{
			printf("%d,its factors are ",a);
			for(b=1;b<a;b++)
			{
				if((a%b)==0)
				printf("%d ",b);
			}
			printf("\n");
		}
	}
	return 0;
}
