#include"stdio.h"
int main()
{
	int i;
	float h,s;
	s=100,h=s/2;
	for(i=2;i<=10;i++)
	{
	    s=s+2*h;
	    h=h/2;
	}    
        printf("第10次落地时共经过:%f米\n",s);
        printf("第10次反弹:%f米",h);
        return 0;
}
