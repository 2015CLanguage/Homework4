Enter file contents here#include <stdio.h>


int main()
{
	long long  t=1,ans=0;
	for (int i=1; i<=20; i++)
	{
		t=t*i;
		ans+=t;
	}
	printf("%lld\n",ans);
	return 0;
}
