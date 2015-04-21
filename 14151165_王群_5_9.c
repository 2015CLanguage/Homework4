#include<stdio.h>
int main()
{
 int q1,q2,q3,q4,q5,q6,q7,q8,q9q10;
 int i,a,n,s;
 for(a=2;a<=1000;a++)
{n=o;
  s=a;
   for(i=1;i,a;i++)
	   if(a%i==o)
	 {n++;
	   s=s-i;
	   switch(n)
	   {case 1:
	        q1=i;  break;
        case 2:
	        q2=i;  break;
        case 3:
	        q3=i;  break;
        case 4:
	        q4=i;  break;
        case 5:
	        q5=i;  break;
        case 6:
	        q6=i;  break;
        case 7:
	        q7=i;  break;
        case 8:
	        q8=i;  break;
        case 9:
	        q9=i;  break;
        case 10:
	        q10=i;  break;
	   }
	 }
	   if(s==o)
{
	   printf("%d,Its factors are",a);
	   if(n>1) printf("%d,%d",q1,q2);
	   if(n>2) printf(",%d",q3);
       if(n>3) printf(",%d",q4);
       if(n>4) printf(",%d",q5);
       if(n>5) printf(",%d",q6);
       if(n>6) printf(",%d",q7);
       if(n>7) printf(",%d",q8);
       if(n>8) printf(",%d",q9);
       if(n>9) printf(",%d",q10);
	   printf("\n");
	   }
 }
return 0
}
