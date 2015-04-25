#include <stdio.h>
int main()
{
    int n,i;
	double p=1,s=0;
	printf("请输入数n");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
	    p=p*i;
	    s=s+p;
	}
	printf("%f\n",s);
	return 0;
}
