#include<stdio.h>
int main()
{
	int n,t;
	double s,m;
	n=1;
	s=0;
	while(n<21)
	{
		t=1;
		m=1;
		while(t<n+1)
		{
		m=m*t;
		t=t+1;
		}
		n=n+1;
		s=s+m;
	}
	printf("%22.15e\n",s) ;
	return 0;
}
