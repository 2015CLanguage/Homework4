#include<stdio.h>
int main()
{int s=0,t=1;
 int n;
 for(n=1;n<=6;n++)
{
	t=t*n;
	s=s+t;
}
printf("1!+2!+3!+4!+5!+6!=%d\n",s);
return 0;
}
