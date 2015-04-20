#include <stdio.h>
int main(){
	int m,n,a,b,m1,n1,i,c;
	printf("请输入两个整数：");
	if(m<n){
		c=m;
		m=n;
		n=c;
	}
	scanf("%d%d",&m,&n);
	m1=m;
	n1=n;
	a=m%n;
	while(a!=0){
		m=n;
		n=a;
		a=m%n;
	}
	a=n;
    for(i=2;i<=n1;i++){
    	if(m1%i==0&&n1%i==0){
    		m1=m1/i;
    		n1=n1/1;
		}
	}
	b=m1*n1;
	printf("最小公倍数是%d,最大公约数为%d",b,a);
	 
	return 0;
} 
