#include<stdio.h>
void main()
{
int i,j,k,s;
for(i=1;i<=1000;i++)
{
	for(j=1,s=0;j<i;j++)
	{
	   if(i%j==0) {s=s+j;}
	}
	if(s==i)
	{printf("%d its factors are ",i);
	for(k=1;k<i;k++){if(i%k==0){printf("%d,",k);}}
	printf("\n");
	}
}	
			
}
