#include<stdio.h>
int main()
{
    float a=100,b=a/2;
    int i;
    i=2;
    while(i<=10)
       {
        a=a+2*b;
        b=b/2;
        i=i+1;
       }

	printf("第十次落地经过%f米\n",a);
	printf("第十次反弹%f米\n",b);
	return 0;
}
