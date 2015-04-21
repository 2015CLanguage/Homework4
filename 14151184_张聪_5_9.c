#include<stdio.h>
#include<math.h>
int main()
{int i,j,s=0;
for(i=2;i<=1000;i++)
{for(j=1;j<i;j++)
{if((i%j==0))
s=s+j;
if(s=i)
printf("%d,its factors are",i);
for(j=1;j<i;j++)
if(i%j==0)
printf("%d ",j);
printf("\n");
}
}
return 0;
}
