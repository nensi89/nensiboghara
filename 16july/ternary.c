#include<stdio.h>

int main() {
    int age;
    printf("enter your age:");
    scanf("%d",&age);

    (age>=18) ? printf("not adult\n"): printf(" adult\n");
    return 0;
}


