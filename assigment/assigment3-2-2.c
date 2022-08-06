#include<stdio.h>

int main() {
    int a=6,b=9;
    printf("the value of a before swap is %d\n",a);
    printf("the value of b before swap is %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a after swap is %d\n",a);
    printf("the value of b after swap is %d\n",b);
    return 0;
}
   


