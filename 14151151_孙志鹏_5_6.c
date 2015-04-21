#include<stdio.h>
int main ()
{
	double a=0,b=1;
	int n;
	for(n=1;n<=20;n++)
	{
		b=b*n;
		a=a+b;
	}
	printf("1!+2!+3!+4!+...+20!=%d\n",a);
	return 0;
}
