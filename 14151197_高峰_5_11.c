#include <stdio.h>
int main(){
	double h=100,a,l=100,i;
	for(i=1;i<=10;i++){
		h=h/2;
		l=l+h*2;
	}
	printf("共经过%lf米，第10次反弹%lf米高",l,h);
	return 0;
}
