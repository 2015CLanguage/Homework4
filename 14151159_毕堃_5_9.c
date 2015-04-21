#include<stdio.h>
int main()
{
	int i,j,a,k;
	for(i=1;i<=1000;i++){
		a=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				a=a+j;}
		}
		if(i==a){
			printf("%d its factors are ",a);
			for(k=1;k<i;k++){
				if(i%k==0){
				printf("%d,",k);
				}
			}printf("\n");
		}
	}
	return 0;
}
