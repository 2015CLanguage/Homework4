#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	float m=100,n=100;
	for(i=1;i<10;i++)
	{
		m=m*1/2;
	    n=n+m;
	}
	m=m*1/2;

	printf("第十次落地反弹%f米\n",m);
	printf("第十次落地时共经过%f米\n",n);


}
