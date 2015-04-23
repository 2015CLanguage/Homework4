#include<stdio.h>
int main()
{
	int a, b, i, m;
	for (i=2; i<1001; i++)
	{
		a=0;
		for (m=1; m<i; m++)
		{
			if (i%m==0)
				a=a+m;
		}
		if (a==i)
		{
			printf("%d its factors are 1", i);
			for (m=2; m<i; m++)
			{
				if (i%m==0)
				{
					printf(", %d", m);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
