#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,a,b;
	printf("请输入两个正整数");

	scanf("%d,%d",&m,&n);
	for(a=m;a>=1;a--){
		if(n%a==0 && m%a==0)break;
	}
		printf("最大公约数为%d",a);  

b= (m/a)*(n/a)*a;
printf("最小公倍数是%d",b);
return 0;









}
