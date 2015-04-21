#include<stdio.h>
int main()
{
     int a,b,c,d,e,f,m,n;
     scanf("%d,%d",&m,&n);
     if(m>n){
		 a=m;
		 b=n;
	 }
	 else{ 
		 a=n;
		 b=m;
	 }
	 d=a%b;
	 do{
		 a=b;
		 b=d;
		 d=a%b;
	 }
	 while(d!=0);
	 e=m/b;
	 f=n/b;
	 c=e*f*b;
	 printf("最大公约数为%d\n",b);
	 printf("最小公倍数为%d\n",c);
	 return 0;
}
