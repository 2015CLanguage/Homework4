#include <stdio.h>
#include <math.h>

int main()
{
    int n=10,i;
    float h10,si,h;
    for(i=2;i<=10;i++)
       {
         si=200/pow(2,i-1);
         h=100+si;
       }

        h10=100/pow(2,n);
      printf("%f,%f\n",h,h10);
    return 0;
}
