Enter file contents here
# include <stdio.h>
int main()
{
	int n, a;
	double s = 0, t = 1;
	printf("请输入一个n:");
	scanf("%d", &n);
	a = n;
	for (n = 1; n <= a; n++)
	{
		t = t*n;
		s = s + t;
	}
	printf("1!+2!+....+n!=%lf\n", s);
	return 0;
}
