#include <stdio.h>
int main ()
{
	int a,b,i;
	for (a=2;a<1000;a++)
	{b=0;
		for(i=1;i<a;i++)
			if ((a%i)==0) b=b+i;
			if (b==a)
			{
				printf("%d,is factors are ",a);
			for (i=1;i<a;i++)
				if ((a%i)==0) printf("%5d",i);
				printf("\n");
			}
	}
	return 0;
}

