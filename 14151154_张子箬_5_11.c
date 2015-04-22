#include<stdio.h>
#include<math.h>
int main()
{
	int h,i;
	double s,l;    //h是100米，s是路程，i是反弹次数，l是反弹高度
	s=100;
	h=100;
	for(i=2;i<=10;i++)
		s=s+h*pow(0.5,i-2);
	for(i=2;i<=10;i++)
		l=h*pow(0.5,i);
	printf("第10次落地时共经过%lf",s);
	printf("米\n");
	printf("第10次反弹%lf",l);
	printf("米\n");
	return 0;
}
