#include<stdio.h>
void main()
{
	int a, j,i;
	i = 2;
	while (i <=1000)
	{
		a = 0;
		for (j = 1; j <i; j++)
		{
			if (i%j == 0)
				a = a + j;
		}
		if (a == i){
			printf("%d", i);
			printf("its factors are");
			for (j = 1; j < i; j++)
			{
				if (i%j == 0)
				printf("%4d", j);
			}
			printf("\n");
		}
		i = i + 1;
	}
}
