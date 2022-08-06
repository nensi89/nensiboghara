#include<stdio.h>

int main() {
    int number;
    printf("enter any number:");
    scanf("%d",&number);
    (number%2) ? printf("number is even"): printf ("number is odd");
    return 0;
}