#include <stdio.h>
int main()
{
	double a=100,h=a/2;
	int n;
	for (n=2;n<=10;n++)
	{
		a=a+2*h;
		h=h/2;
	}
	printf("共经过%f米\n",a);
	printf("第十次反弹高度为%f米\n",h);
	return 0;
}
