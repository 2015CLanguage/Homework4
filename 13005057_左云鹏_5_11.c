#include<stdio.h>
int main()
{
	int n;
	double sn=100,hn=sn/2;
	for(n=2;n<=10;n++)
	{
		sn=sn+2*hn;
		hn=hn/2;
	}
	printf("第十次落地时所经过的路径是:%f米\n",sn);
	printf("第十次落地时反弹的距离为:%f米\n",hn);
	return 0;
}
