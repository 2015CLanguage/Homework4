#include<stdio.h>
int main()
{
	int i,m,n,t;
	printf("计算i!+(i-1)!+…+2!+1!\n请输入i的值(太大会溢出= =)\n");
	scanf("%d",&i);
	n=1,t=0;
	while(i>=1)
	{
		m=i;
		while(m>=1)
		{
			n=n*m;
			m=m-1;
		}
		i=i-1;
		t=t+n;
                n=1;
	}
	printf("结果是%d\n",t);
        return 0;
}
