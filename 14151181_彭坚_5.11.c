#include<stdio.h>
#include<math.h>
int main()
{
	float h, m, n, i, a, b, k, s = 0;
	h = 100;
	for (i = 0; i <= 9; i++)
	{
		m = powf(2, i);
		a = h / m;
		s = s + 2*a ;
	}
	k = s - h;
	n = powf(2,10);
	b = h / n;
	printf("在第十次落地时，共经过%f米\n", k);
	printf("第十次反弹%f米\n", b);
	return 0;
}
