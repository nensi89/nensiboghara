#include<stdio.h>

int main() {
    int a,b,sum,subtraction,multiplication,division,modulo;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    
    sum=a+b;
    printf("sum is %d\n",a+b);

    subtraction=a-b;
    printf("subtraction is %d\n",a-b);

    multiplication=a*b;
    printf("multiplication is %d\n",a*b);

    division=a/b;
    printf("division is %d\n",a/b);

    modulo=a%b;
    printf("modulo is %d\n",a%b);

    return 0;
}
