#include<stdio.h>
void main()
{
	int n,i;
	double k=1,s=0;
    printf("Please input an integer\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    k=k*i;
		s=s+k;
	}
	printf("The sum of the factorials of the first %d integers is %22.15E\n",n,s);
}
