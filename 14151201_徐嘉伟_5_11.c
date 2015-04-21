#include <stdio.h>
int main()
{
	double h=100,i,l=100;
	for(i=1;i<=10;i++){
		h=h/2;
		l=l+h*2;
	}
	printf("第十次落地时共经过:%lf,第十次反弹:%lf",l,h);
return 0;
}
