#include <stdio.h>
int main()
{
    int i,a=0,i1;
    for(i=3;i<=1000;i++){
    	for(i1=1,a=0;i1<i;i1++){
    		if(i%i1==0){
    			a=a+i1;
			}
		}
		if(a==i){
			printf("%d its factors are ",i);
			for(i1=1;i1<i;i1++){
				if(i%i1==0){
					printf("%d ",i1);
				}
				}
			}
		}
return 0;
}
