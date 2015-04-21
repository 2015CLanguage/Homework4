#include<stdio.h>
void main()
{
	int i,s=0,t=1,n;
	printf("please input n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=t*i;
		s=s+t;	
	}
    printf("s=%d\n",s);	
}
