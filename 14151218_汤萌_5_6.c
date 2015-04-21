#include<stdio.h>
int main()
{
	int i, a=1, n;
	long b=0;
	scanf("%d", &n);
	for(i=1; i<n+1; i++)
	{
		a=a*i;
		b=a+b;
	}
	printf("%ld", b);
	return 0;
}
