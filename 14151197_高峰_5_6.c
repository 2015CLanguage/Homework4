#include <stdio.h>
int main(){
	int i,j,a,b=1,c,d=0;
	for(i=1;i<=20;){
		for(j=1,b=1;j<=i;){
			a=j;
			b=b*j;
			j++;
		}
		c=b;
		d=d+c;
		i++;
	}
	printf("结果为%d",d);
	return 0;
}
