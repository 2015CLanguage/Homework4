#include <stdio.h>
int main()
{
	double s=0,i=1;
	int n;
	for (n=1;n<=20;n++)
	{
		i=i*n;
		s=s+i;
	}
	printf("1!+2!+...+20!=%22.16e\n",s);
	return 0;
}
