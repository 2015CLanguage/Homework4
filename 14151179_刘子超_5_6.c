#include<stdio.h>
int main()
{
	int n,i,j,t,s;
	scanf("%d",&n);	
	s=0;
    for (i=1;i<=n;i++)
	{
		t=1;
		for(j=1;j<=i;j++)
		{
			t=t*j;
		}
		s=s+t;
	}
	printf("%d",s);
}
