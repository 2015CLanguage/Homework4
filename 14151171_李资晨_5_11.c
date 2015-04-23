#include "stdio.h"
void main()
{
	int i;
	float s=0,h=100;
	s=s+100;
	for(i=2;i<=10;i++)
	{
		h=1.0/2*h;
		s=s+2*h;
	}
	printf("共经过%f米,第十次反弹%f米\n",s,h);
}
