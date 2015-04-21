#include <stdio.h>
int main()
{
	int i,j,a=0,b=1;
	for(i=1;i<=20;i++){
		for(b=1,j=1;j<=i;j++){
			b=b*j;
		}
		a=a+b;
	}
	printf("结果为:%d",a);
return 0;
}
