# Homework4
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum=0,i;
    int a[6]={1};
    for(i=1;i<=5;i++)
    {
        a[i]=a[i-1]*i;
        sum=sum+a[i];
    }
    printf("the result is:'%d'\n",sum);
    return 0;
}
