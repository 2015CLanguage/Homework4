#include <stdio.h>
int main(){
	double a=1,b=2,d,e,f,i;
	for(i=1;i<=20;i++){
		d=b/a;
		e=e+d;
		f=b;
		b=a+b;
		a=f;	
	}
	printf("结果为%lf",e);
	return 0;
}
