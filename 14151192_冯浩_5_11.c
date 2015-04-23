#include<stdio.h>
int main()
{
	double height,s;
	int i;
	height=100;
	s=0;
	for(i=1;i<=10;i++)
	{	s=s+height;
		height=height/2;
		s=s+height;
	}
	s=s-height;
	printf("共经过%f米\n",s);
	printf("第十次反弹%f米\n",height);
	return 0;
}
