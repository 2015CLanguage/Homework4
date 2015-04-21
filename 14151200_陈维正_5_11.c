#include<stdio.h>
void main()
{
float s=200,h=50,i;
for(i=1;i<=8;i++)
{
s=s+h;
h=h/2;
}
printf("第十次落地时经过的总路程为：%f\n",s);
printf("第十次落地时的高度为：%f\n",h/2);
}
