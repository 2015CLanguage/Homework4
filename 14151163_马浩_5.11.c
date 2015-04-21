#include<stdio.h>
int main()
{
	double sn=100,hn=sn/2;
	int n;
	for(n=2;n<=10;n++)
	{
		sn=sn+2*hn;
		hn=hn/2;
	}
	printf("经过第十次反弹共经过%f米\n",sn);
	printf("第十次反弹%f米\n高",hn);
	return 0;
}
