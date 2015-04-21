#include<stdio.h>
int main()
{
	int a,b,i,j,n;
	printf("请输入一个整数n\n");
	scanf("%d",&n);
    a=1;
	b=0;
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            a=a*j;}
		b=b+a;}
	printf("%d\n",b);
	return 0;
}
