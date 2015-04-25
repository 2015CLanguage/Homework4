#include<stdio.h>
void main()
{
	int m,n,a,b;
	scanf("%d %d",&m,&n);
    a=m*n;
	while(m!=n)
	{
		if(m>n) m=m-n;
		else n=n-m;
	}
	b=a/m;
	printf("a=%d,b=%d\n",m,b);  
}
