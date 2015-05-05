 #include<stdio.h> 
 void main() 
 { 
 	float a, b,sum; 
 	b = 100; 
 	sum = 0; 
 	for (a = 1; a < 10; a++) 
 	{ 
		sum = sum + 1.5*b; 
 		b = b / 2; 
 	} 
 	printf("%f\n", sum); 
 	printf("%f\n", b/2); 
 } 
