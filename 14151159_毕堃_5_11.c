#include<stdio.h>
int main()
{
	float s,h,i;
	s=0;
	h=100;
	for(i=1;i<=10;i++){
			s=s+2*h;
			h=h/2;}
	printf("共经过了%f米，第十次反弹了%f米高",s-100,h*2);
	return 0;
}
