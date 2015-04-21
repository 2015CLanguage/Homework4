#include<stdio.h>
int main()
{
    int n,t=1;
	long i=0,sum=0;
	scanf("%d",&n);
    while(i<n)
	{
	i=i++;
	t=t*i;
	sum=sum+t;
	}
    printf("结果为%ld",sum);
	return 0;
}
