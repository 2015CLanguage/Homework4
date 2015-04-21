#include <stdio.h>
int main()
{
	int s=0,i=1;
	int n;
	for (n=1;n<=6;n++)
	{
		i=i*n;
		s=s+i;
	}
	printf("1!+2!+...+6!=%d\n",s);
	return 0;
}
