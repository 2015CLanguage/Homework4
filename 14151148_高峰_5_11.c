#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float k=0.5,H=100,h;
	for(i=2;i<=10;i++)
	{
		h=2*pow(k,i-1)*100;
		H=H+h;
	}
	h=pow(k,9)*100;
	printf("共经过%f米\n",H);
	printf("第10次反弹%f米\n",h);
	return 0;
}
