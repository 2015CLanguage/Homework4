#include<stdio.h>
int main()
{
	int n=10, i;
	float h=100.0, s=100.0;
	for (i=0; i<10; i++)
	{
		h=h/2.0;
		s=s+h*2;
	}
	printf("第十次落地时，经过的路程为：%.4f，第十次弹起后，最高高度为：%.4f\n", s, h);
	return 0;
}
