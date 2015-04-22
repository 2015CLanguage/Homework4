#include<stdio.h>
int main()
{
	int a,i,m;      //a是完全数，i是约数的和，m是约数
	for(a=1;a<=1000;a++)
	{
		i=0;
		for(m=1;m<a;m++)
		if(a%m==0)i=i+m;
	    if(i==a)
		{printf("%d its factors are ",a);
		 for(m=1;m<a;m++)
			 if(a%m==0)
				 printf("%d ",m);
			 printf("\n");
		}
	}
	return 0;
}

