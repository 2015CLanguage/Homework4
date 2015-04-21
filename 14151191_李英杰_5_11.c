#include<stdio.h>
void main()
{
    int n=10,i;
	float h=100,s;
    for(i=1,s=h;i<n+1;i++)
	{
		h=h/2;
		s+=2*h;
	}
	s-=2*h;
	printf("总路程为：%f米\n第十次反弹高度为：%f米\n",s,h);
}
