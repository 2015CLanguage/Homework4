# include<stdio.h>
int main()
{
	double h = 100.0, s =0;
	for (int n = 1; n <= 10; n++)
	{
		s = s + 2 * h;
		h = h / 2;
	}
	s = s - 100;
	printf("s=%lf\n", s);
	printf("h=%lf\n", h);
	return 0;
}
