#include <stdio.h>
int main()
{
	int m,n,i;
	for (m=2;m<1000;m++)
	{ 
		n=0;
		for (i=1;i<m;i++)
			if ((m%i)==0) n=n+i;
		if(n==m)
		{printf("%d,its factors are",m);
		for (i=1;i<m;i++)
		if (m%i==0) 
			printf("%d",i);
		   printf("\n");
		}
	}
	return 0;
}
