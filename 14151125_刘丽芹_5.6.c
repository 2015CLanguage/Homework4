#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,p,y,j;
    printf("请输入n值:\n");
	scanf("%d",&n);
	p=0;
	y=1;
	for(i=1;i<=n;i++)
	{
		{
			for(j=1;j<=i;j++)
			
			y=y*j;
		    
		}
	
		p=p+y;
		y=1;
		
	}
	printf("所求结果为%d\n",p);
}
