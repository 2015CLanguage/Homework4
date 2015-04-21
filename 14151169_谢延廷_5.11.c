#include<stdio.h>
int main()
{
  double oh=100,hh=s/2;
  int n;
  for(n=2;n<=10;n++)
  {
  oh=oh+2*hh;
  hh=hh/2;
	}
	printf("第十次落地时共经过%f米\n",oh);
	printf("第十次反弹的高度为%f米\n",hh);
	return 0;
}
