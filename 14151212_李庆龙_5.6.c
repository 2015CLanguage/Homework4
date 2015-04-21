# include<stdio.h>
int main()
{
	int i, s;
	i = 1;
	s = 0;
	int ad(int n);
	for (i; i <=3; i++)
	{
		s = s + ad(i);
	}
	printf("和为：%d",s);
	system("pause");
}
int ad(int n)
{
	int s = 1;
	if (n == 1)
		s = 1;
	else
	{
		s = ad(n - 1)*n;
	}
	return(s);
}
