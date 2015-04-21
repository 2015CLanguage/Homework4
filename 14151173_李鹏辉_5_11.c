#include<stdio.h>
void main()
{
	double h=100,s=0;
	int i;
	s+=100;
	for(i=2;i<=10;i++)
	{
		h=1.0/2*h;
		s=s+2*h;
	}
	printf("s=%lf,h=%lf\n",s,h);
}
