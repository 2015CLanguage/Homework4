#include<stdio.h>
int main()
{
	int m,n,a,b,i;
	scanf("%d,%d",&m,&n);
	if(m>n)
		a=m,b=n;
	else
		a=n,b=m;
	for(i=b;i>=1;i--)
		if((a%i==0)&&(b%i==0))break;
		if(i>=2)printf("最大公约数是%d\n",i);
		else
			printf("无最大公约数\n");
    for(i=a;i<=a*b;i++)
		if((i%a==0)&&(i%b==0))break;
		printf("最小公倍数为%d\n",i);
	return 0;
}
