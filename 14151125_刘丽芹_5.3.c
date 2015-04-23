#include <stdio.h>
#include<math.h>
void main()
{
	int m,n,i,t,p;
	printf("请输入两个正整数m,n:\n");
	scanf("%d,%d",&m,&n);
	if (m<n)
	   {
		p=m;
	    m=n;
	    n=p;
	}

	for(i=n;i>=1;i--)
		if(m%i==0&&n%i==0)
		break;
	printf("两数的最大公约数为%d",i);
	t=(m*n)/i;
	printf("两数的最小公倍数为%d",t);

}
