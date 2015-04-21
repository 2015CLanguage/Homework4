#include <stdio.h>
int main()
{	
	float h,s;
	int n;
	h=100;
	s=0;
	for (n=1;n<=10;n++)
	{
	 s=s+2*h;
	 h=h/2;
	}
	s=s-100;
	printf("%f\n",h);
	printf("%f",s);
	return 0;
}	
