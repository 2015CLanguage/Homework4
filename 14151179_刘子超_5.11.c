#include<stdio.h>
void main()
{
	double i,h,s=0;
	h=100.0;
	for(i=1;i<=9;i++)
	{
		s=s+h;
		h=h/2;
		s=s+h;
	}
	s=s+h;
	h=h/2;
	printf("经过%lf米\n",s);
	printf("反弹%lf米",h);
}
