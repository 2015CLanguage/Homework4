#include<stdio.h>
void main()
{
	double a, b, sum;
	int i;
	b = 1;
	sum = 0;
	while (b <=20)
	{
		a = 1;
		for (i = 1; i <= b; i++)
		{
			a = a*i;
		}
		sum = sum + a;
		b = b + 1;
	}
	printf("%f\n", sum);
}
