#include<stdio.h>
#include<math.h>
int main()
{
int n;
double s,h;
s=100;
h=50;
for(n=1;n<11;n++)
{
s=s+2*h;
h=h/2;
}
printf("共经过%f米\n",s);
printf("第十次反弹%f米\n",h);
return 0;
}
