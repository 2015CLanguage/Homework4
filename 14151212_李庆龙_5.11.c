# include<stdio.h>
int main()
{
	float i, h=100,s=0;
	for (i = 1; i <= 2; i++)
	{
			s = s +h;	
			h = h / 2;
	}
	printf("第10次着地之后共经过%f m\n", s);
	printf("第十次反弹高度为：%f m", h);
	system("pause");
}
