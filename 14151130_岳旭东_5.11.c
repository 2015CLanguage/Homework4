#include<stdio.h>
int main()
{
  double s=100,h=s/2;
  int n;
  for(n=2;n<=10;n++)
  {
  s+=2*h;
  h=h/2;
	}
	printf("第十次落地时共经过%f米\n",s);
	printf("第十次反弹的高度为%f米\n",h);
	return 0;
}
