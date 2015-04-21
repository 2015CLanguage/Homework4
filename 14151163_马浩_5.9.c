#include<stdio.h>
int main()
{
	int a,b,c;
		for(a=2;a<1000;a++)
		{
			b=0;
			for(c=1;c<a;c++)
				if((a%c)==0)b=b+c;
			if(b==a)
			{
				printf("%d,its factors are ",a);
				for(c=1;c<a;c++)
			if(a%c==0)
				printf("%d",c);
			printf("\n");
			}
		}
		return 0;
}
