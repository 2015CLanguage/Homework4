#include <stdio.h>
int main ()
{
	int i=1;
	double H=100,h=H/2;
	while (i<10)
	{
		H=H+2*h;
		h=h/2;
		i=i++;
	}
	printf("第十次落地时经过了%f米\n",H);
	printf("第十次反弹高%f米\n",h);
	return 0;
}

