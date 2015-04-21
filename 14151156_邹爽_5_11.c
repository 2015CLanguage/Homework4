#include <stdio.h>
int main()
{
	double n=100,h=n/2;
	int i;
	for(i=2;i<=10;i=i++)
	{
	n=n+h*2;
	h=h/2;
	}
	printf("第十次落地共经过%lf米\n",n);
	printf("第十次反弹高度为%lf米\n",h);
	return 0;
}
