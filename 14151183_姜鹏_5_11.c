#include <stdio.h>
int main()
{
  double sn=100,hn=sn/2;
  int n;
  for (n=2;n<=10;n++)
  {
    sn=sn+2*hn;
	hn=hn/2;
  }
  printf("球在第十次落地时共经过%10.3f米\n",sn);
  printf("球在第十次落地时反弹%10.3f米\n",hn);
  return 0;
}
