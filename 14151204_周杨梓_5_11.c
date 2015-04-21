#include<stdio.h>
int main()
{
 double h,H,i;
 h=100;
 H=0;
 for(i=1;i<11;i++)
 {
  H=H+h;
  h=0.5*h;
  H=H+h;
 }
 printf("第十次落地时共经过%f米,且第十次反弹高度为:%f\n",H-h,h);
 return 0;
}
