# include<stdio.h>
int main(void)
{
	int i;
	double h,sum;
	h=100;
	sum=0;

	for(i=1;i<=10;i++)//用for循环计反弹次数
	{	
		sum=sum+h;//此行计算下落路程
		h=h/2;
		sum=sum+h;//此行计算上升路程
	}
	printf("第十次反弹高度为%lf\n",h);
	sum=sum-h;
	printf("第十次落地时经过的路程为%lf\n",sum);
	return 0;
}
