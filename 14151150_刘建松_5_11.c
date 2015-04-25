#include"stdio.h"
int main()
{
	float h,s;
	int n;
	s=100;
	h=100;
	for(n=1;n<10;n++)
	{
		h=h/2;
		s=s+2*h;
	}
	printf("共经过%f米\n",s);
	printf("第10次反弹的高度是%f米\n",h/2);
	return 0;
}
