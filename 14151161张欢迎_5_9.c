 #include<stdio.h> 
 #include<math.h> 
 void main() 
 { 
 	int i,j,a; 
 
 
 	for(j=2;j<1000;j++){ 
		a=0; 
		for(i=1;i<j;i++) 
			if((j%i)==0) a=a+i; 
 		 
		if(a==j) 
		{ 
			printf("%d,Its factors are :",j); 
			for(i=1;i<=j;i++) 
				if(j%i==0) printf("%d,",i); 
 			printf("\n"); 
		} 
 	} 
 
 
 } 
