#include <stdio.h>
int main()
{
	float s=100,h=100;
	int i=1;
	while (i<=10)
	{
		h=h/2;
		i++;
		s=s+h*2;
	}
	printf("十次反弹经过%fm\n",s);
	printf("第十次反弹的高度为%fm\n",h);
	return 0;
}
