#include <stdio.h>
int main()
{
	double x=100,y=x/2;
	int n;
	for (n=2;n=10;n++)
	{
		x=x+2*y;
		y=y/2;
	}
	printf("第十次落地共经过%f米\n",x);
	printf("第十次落地反弹%f米\n",y);
	return 0;
}
