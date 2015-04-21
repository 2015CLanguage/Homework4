#include <stdio.h>    //xt5-11

int main()
{
	
	int i,j;
	float h[10],s;
	h[0]=100.0;
	
	for(i=1;i<=9;i++)
	{
		h[i]=h[i-1]/2;
	}
	for(j=0;j<=9;j++)
	{
		s=s+h[j];
	}
	printf("第十次落地时总共经过%f米。\n",s);
	printf("第十次落地时球的高度%f米。\n",h[9]);
	
	return 0;
 } 
