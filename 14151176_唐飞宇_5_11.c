#include <stdio.h>
void main()
{
	double n=100,p,q=100;
	int i,t=0;
	p=1;
	for(i=1;i<10;i++)
	{	
		p=p*0.5;
		q=q+2*n*p;
	}	
	p=n;
	for(i=1;i<=10;i++)
	{
		p=p*0.5;
	}
	printf("第10次落地时，共经过了%lf米\n",q);
	printf("第10次反弹高度是%lf米\n",p);
}
