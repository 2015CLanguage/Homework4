#include<stdio.h>
int main()
{
	int a=0,b=1,n=1;
	while(n<=5)
    {
        b=b*n;
        a=a+b;
        n=n+1;
    }

    printf("1!+2!+3!+4!+5!=%d\n",a);
    return 0;
}
