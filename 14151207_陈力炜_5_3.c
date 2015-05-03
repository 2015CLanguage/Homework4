#include <stdio.h>
int main(){

	int x,y,a,b,c,d,e,f,t,min,max;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	t=0;
	c=(x>y)?x:y;
	min=(x<y)?x:y;
	max=(x>y)?x:y;
    d=(x<y)?x:y;
	while(t==0)
	{   
		e=max%d;
		f=min%d;
		if (e==0 && f==0)
		{
			a=d;
			t=t+1;}
	
		d-=1;
	}
	t=0;
	while(t==0)
	{
		e=c%max;
		f=c%min;
		if (f==0 && e==0)
		{
			b=c;
			t=t+1;
		};
		c+=1;


	}
	printf("最大公约数为%d\n",a);
	printf("最小公倍数为%d\n",b);
	return 0;
    
}
