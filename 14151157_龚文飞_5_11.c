#include"stdio.h"
void main()
{
	double h,s,a;
	int i;
	h=100;
	s=0;
	a=1;
	for(i=1;i<11;i++)
	{
		s=s+h*2;
		a=a*2;
			h=100.0/a;
	}
	printf("共经过%lf米\n",s);
	printf("第10次反弹%lf米\n",h);
}
