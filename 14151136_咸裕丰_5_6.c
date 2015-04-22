#include"stdio.h"
int main()
{
	float sum=0,t=1;
	int i=1,j=1,n;
        printf("请输入n=");
	scanf("%d",&n);
	while(i<=n)
	{
		while(j<=i)
		{t=t*j;
		 j=j+1;
		}
	sum=sum+t;
	i=i+1;
	}
	printf("1!+2!+...+n!=%.0f\n",sum);
	return 0;
}
