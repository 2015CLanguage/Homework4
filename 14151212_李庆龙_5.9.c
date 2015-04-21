# include<stdio.h>
int main()
{
	int i;
	int judge(int m);
	for (i = 1; i <= 100; i++)
	{
		judge(i);
	}
	system("pause");
}
int judge(int m)
{
	int i,j=0, s = 0; 
	int a[1000];
	for (i = 1; i < m; i++)
	{
		if ((m%i) == 0)
		{
			s = s + i;
			a[j] = i;
			j++;
		}
	}
	if (s == m)
	{
		printf("%d  its factors are :", m);
		for (i = 0; i < j; i++)
			printf("%-4d", a[i]);
		printf("\n");
	}

}
