#include"stdio.h"
void main()
{
	int i,s,t;
	i=1;
	s=0;
	t=1;
	while(i<21)
	{
		t=t*i;
		s=s+t;
		i=i+1;
	}
	printf("原式的值为%d\n",s);
}

