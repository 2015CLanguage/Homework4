#include<stdio.h>  
int main() 
{ 
int i,j,k; 	 
 	for(i=1;i<=1000;i++)//for循环试验1000以内的数 
	{ 
		for(j=1,k=0;j<i;j++)
		{ 
			if(i%j==0) 
				k=k+j; 
		} 
 			if(k==i)
			{ 
				printf("%d its factors are",k); 
				for(j=1;j<i;j++)
				{ 
					if(k%j==0) 
					printf("%d ",j); 
				} 
				printf("\n"); 
			} 	 
 	} 
 	return 0; 
 } 
