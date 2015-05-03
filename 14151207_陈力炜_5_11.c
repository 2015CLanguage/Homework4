#include <stdio.h>
int main(){
	float h,n,a,b,hx;
	h=100;
	hx=100;
	for(n=1;n<=9;n++)
		hx=hx/2;
		h=h+2*hx;
 	hx=hx/2; 
	printf("经过%f米\n",h);
    printf("第十次反弹%f米\n",hx);
	return 0;
}
