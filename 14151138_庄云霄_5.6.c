#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,a=0,b=1;
	printf("请输入一个n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		b=b*i;
		a=a+b;
	}
printf("最后的结果是%d",a);
return 0;

}
