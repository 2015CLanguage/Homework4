Enter file contents here
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,t,d,d1;
	printf("请输入两个正整数a和b：\n");
	scanf("%d,%d",&a,&b);
    d=a*b;
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	t=a%b;
	if(t==0)
	{
		d1=d/b;
		printf("最大公约数和最小公倍数分别为：%d,%d\n",b,d1);
	}
	else{
		do
		{
			a=b;
			b=t;
			t=a%b;
		}  while(t!=0);
		d1=d/b;
		printf("最大公约数和最小公倍数分别为：%d,%d\n",b,d1);
	}
	return 0;
}
