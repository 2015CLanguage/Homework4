#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=100,y=0,n;
    for(n=1;n<11;n++)
    {
        y=y+x;
        x=x/2;
    }
    printf("第10次落地时球共经过 %f 米\n",y);
    printf("第10次反弹 %f 米高\n",x);
    return 0;
 }
