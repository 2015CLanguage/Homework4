#include <stdio.h>
int main(){
	int n,t,x;
	int y;
	printf("n=");
	scanf("%d",&n);
	x=1;
	y=0;
    for (t=1;t<=n;t++){
		x=x*t;
		y=y+x;
	}
	printf("结果为");
	printf("%d\n",y);
	return 0;
}
