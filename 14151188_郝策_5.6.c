	#include"stdio.h"
int main()
{
	int a,b,c=0,i;
	for(a=1;a<=5;a++)
	{
		b=1;
		for(i=1;i<=a;i++)
		{
			b=b*i;
		}
		c=c+b;
	}
printf("%d",c);
return 0;
}
