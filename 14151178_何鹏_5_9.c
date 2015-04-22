#include "stdafx.h"
void main()
{
	int m, i, j, s;
	for (m = 2; m <= 1000; m++)
	{
		s = 0;
		for (i = 1; i <= m/2 ; i++)
		{
			if (m%i == 0)
				s = s + i;
		}
		if (m == s)
		{
			printf_s("%d its factors are ", m);
			for (j = 1; j <= m/2 ; j++)
			if (m%j == 0)
				printf_s("%d,", j);
			printf("\n");
		}
	}
}
