#include<stdio.h>
int main()
{
int n,m,s;
for(n=2;n<=1000;n++)
{
	s=0;
	for(m=1;m<=n/2;m++)
		if(n%m==0)
			s=s+m;
    if(s==n)
     {
		printf("%d,its factors are ",n);
		for(m=1;m<=n/2;m++)
	  		 if(n%m==0)
		   		 printf("%d  ",m);
		printf("\n");
}
}
return 0;
}
