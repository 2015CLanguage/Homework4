#include<stdio.h>
int main()
{double a=100,b=a/2;
int n;
for(n=2;n<=10;n++)
 {a=a+2*b;
  b=b/2;}
 printf("第十次落地时共经过%f米 ",a);
 printf("第十次反弹%f米 ",b);
 return 0;}
