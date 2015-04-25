#include <stdio.h>
main()
{
      float h=50,s=100;//从第二次下落开始
      int n;
      for(n=2;n<=10;n++)
      {
            s=s+h*2;
            h=h/2;
      }
     printf("第十次落地时，共经过%f米\n",s);
     printf("第十次落地后，反弹%f米\n",h);
}
