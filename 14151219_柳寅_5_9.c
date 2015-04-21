#include<stdio.h>
int main()
{int i,s,a;
for(a=2;a<=1000;a++)
 {s=0;
 for(i=1;i<a;i++) if(a%i==0) s=s+i;
 if (s==a) 
  {printf("%d its factors are ",a);
   for(i=1;i<a;i++) if(a%i==0) printf("%d ",i);
   printf("\n");}  
 }
return 0;}
