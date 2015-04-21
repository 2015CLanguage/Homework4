#include<stdio.h>
void main()
{
    double h=50,s=100;
	int i=1;
	while(i<10)
	{
		s=s+h*2;
	    h=h/2;
		i++;
	}
	printf("The ball has moved %.6lf meters and then bounces %.6lf meter high\n",s,h);
}
