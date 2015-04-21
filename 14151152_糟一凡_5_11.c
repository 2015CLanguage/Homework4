#include"stdio.h"
#include"math.h"
int main()
{
	float h, s;
	int i;
	s=100;
	for(i=1;i<=10;i++)
	{
		h=100*pow(0.5,i);
		s=s+2*h;
		if(i==10)
			printf("第十次反弹高度:%f\n",h);
		if(i==9)
			printf("第十次落地时共经过：%f\n",s);
	}
	return 0;
}
		
