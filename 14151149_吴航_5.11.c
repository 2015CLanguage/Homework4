#include<stdio.h>
int main()
	{
	float a=100,b=2,n,m=0;
	for(n=1;n<=10;n++)
	{
		m=m+2*a;
		a=a/b;
	}
	printf("第十次落地经过%f米\n",m-100);
	printf("第十次反弹%f米\n",a);
	return 0;
}
