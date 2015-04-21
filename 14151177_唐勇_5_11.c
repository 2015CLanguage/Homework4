#include<stdio.h>
main()
{
	float h=100,s=h/2;
	int n;
	for(n=2;n<=10;n++)
	{
		h=h+2*s;
		s=s/2;
	}
	printf("第十次落地时共经过%f/n",h);
	printf("第十次弹起的高度为%f/n",s);
}
