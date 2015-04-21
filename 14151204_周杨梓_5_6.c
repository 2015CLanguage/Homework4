#include<stdio.h>
int main()
{int m,n,s,i;
 printf("请输入正整数n:\n");
 scanf("%d",&n);
 s=0;
 i=1;
 m=1;
 while(i<n+1)
 {
  m=m*i;
  s=s+m;
  i++;
 }
 printf("s=%d\n",s);
 return 0;
}
