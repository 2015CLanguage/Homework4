#include<stdio.h>
int main()
{
	int x,y,i,j,t,m,a[50];
	for(i=2;i<1000;i++)
	{	t=0;
		y=0;
		for(j=1;j<i;j++)
		{x=i%j;
		 if(x==0)
		 {
			a[t]=j;
			t++;
			y=y+j;}
		}
		if(y==i)
		{	printf("%d its factors are:",i);
			for(m=0;m<t;m++)
			 printf("%5d",a[m]);
			printf("\n");}
	
	}
	return 0;
}
