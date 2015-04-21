#include<stdio.h>
int main()
{int m,n,s;
 s=0;
 n=1;
 m=1;
 while(n<6)
 {m=m*n;
  s=s+m;
  n=n+1;
 }
 printf("s=%d\n",s);
 return 0;
}
