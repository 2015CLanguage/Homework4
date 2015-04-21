#include<stdio.h>
#include<math.h>
int main()
{float h=50,s=100;
int i;
for(i=2;i<=10;i++)
{s=s+2*h;
h=h/2;
}
printf("第10次落地时共经过%f米\n",s);
printf("第10次反弹%f米\n",h);
}
