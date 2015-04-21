# include <stdio.h>

int main(void)
{
	int m,n,b,s,t,i,j;
	printf("请输入两个数：");

	scanf("%d%d",&m,&n);//输入两个整数

	if(m>=n)//比较m与n的大小，将大的值赋值给b,小的值赋值给s
	{	
		b=m;
		s=n;
	}
	else 
	{
		b=n;
		s=m;
	}
	for(i=1;i<=s;i++)//从1开始，找m与n的公约数，并将最大的输出
		
	{
		if(s%i==0 && b%i==0)
			
		t=i;
			
	}
	printf("最大公约数为：%d\n",t);
	
	for(j=b;j<=m*n;j++)//从较大的数开始，找这两个数的公倍数，并将第一个找到的输出后终止循环
	{
		if(j%b==0 && j%s==0)
		{
			printf("最小公倍数为：%d\n",j);
			break;
		}
		
	}

	return 0;
}
