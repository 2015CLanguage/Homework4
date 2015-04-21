# Homework4
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum=-100,i;
    float h=100;
    for(i=1;i<=10;i++)
    {
        sum=sum+2*h;
        h=0.5*h;
    }
    printf("the total is:'%d'\n",sum);
    printf("the final height is:'%f'\n",h);
    return 0;
}
