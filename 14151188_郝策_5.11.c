#include"stdio.h"
int main()
{
	double s=-100,h=100;
	int i;
	for(i=1;i<=10;i++)
	{
		s=s+2*h;
		h=0.5*h;
	}
	printf("第十次高度%f米\n",h);
	printf("总高度%f米\n",s);
}
