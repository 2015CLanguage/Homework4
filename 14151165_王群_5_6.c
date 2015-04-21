#include<stdio.h>
int main()
{ int n,s=0,t=1;
  for(n=1;n<=20;n++)
  {
	t=t*n;
	s=s+t;
  }
  printf("1!+2!+...+20!=%d\n",s);
  return 0;
}
