#include<stdio.h>
void main()
{
	int i,j;
	float h=100,s;
	printf("Please input i\n");
	scanf("%d",&i);
	if(i==1)
	{
		s=h;h=h/2.0;
		printf("第%d次落地时共经过%d米，第%d次反弹高度为%d米\n",i,s,i,h);
	}
	else
	{
		s=h;h=h/2.0;
		for(j=2;j<=i;j++)
		{
		    s=s+h*2;h=h/2.0;
		}
	    printf("第%d次落地时共经过%f米，第%d次反弹高度为%f米\n",i,s,i,h);
	}
}
