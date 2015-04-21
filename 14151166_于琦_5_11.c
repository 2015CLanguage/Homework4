#include <stdio.h>
int main()
{
    float a=100,c=100;
    int i;
	for(i=2;i<=10;i++)
	{
	    a=a/2;
		c=c+2*a;
	}
	printf("共经过%f米\n",c);
	printf("第10次反弹%f米\n",a/2);
	return 0;
}
