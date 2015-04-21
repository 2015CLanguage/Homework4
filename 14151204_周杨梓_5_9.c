#include<stdio.h>
int main()
{
 int m,n,r,s,i;
 for(i=1;i<1000;i++)
 {
  m=1;
  s=0;
  while(m<i)
  {
   r=i%m;
   if(r==0)
   {
    s=s+m;
   }
   m=m+1;
  }
  if(i==s)
  {
   printf("%d its factors are ",i);
   for(n=1;n<i;n++)
   {
    r=i%n;
    if(r==0)
    {
     printf("%d ",n);
    }
   }
   printf("\n");
  }
 }
 return 0;
}
