#include<stdio.h>

int main() {
    int p,r,n,SI;
    printf("enter the value of priciple:");
    scanf("%d",&p);
    printf("enter the value of rate of intrest:");
    scanf("%d",&r);
    printf("enter the value of number of years:");
    scanf("%d",&n);
    SI=(p*r*n)/100;
    printf("simple interest is %d",SI);
    return 0;
}