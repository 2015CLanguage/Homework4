//求和：n！（n=1,2,3,4，...，k）
#include<stdio.h>
#include<math.h>
void main()
{
	int sum=0,mut=1,n,i;
	printf("Please input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    mut=mut*i;
		sum=sum+mut;
	}
	printf("sum=%d\n",sum);
}
