#include<stdio.h>
int main()
{
	double s=0,h=100;
	int i;
	for(i=1;i<=10;i++)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("第十次落地时小球共经过了%f米\n",s-100);
	printf("第十次小球反弹了%f米\n",h);
	return 0;
}
