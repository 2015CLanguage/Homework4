#include <stdio.h>

int main()
{
	double x=100;
	double sum=100; 
	for (int i=1; i<10; i++)
	{
	  x=x/2;
	  sum=sum+2*x;
	}
	x=x/2;
	printf("共经过%.6llf米\n第十次会反弹到%.6lf米\n",sum,x);
	return 0;
}
