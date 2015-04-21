# include <stdio.h>
int main()
{
	int x=0,i=1,n;
	for (n=1;n<=5;n++)
	{
		i=i*n;
		x=x+i;
	}
	printf("1!+2!+3!+4!+5!=%d\n",x);
	return 0;
}
