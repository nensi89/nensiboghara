#include<stdio.h>

int main() {
    int days,year;
    printf("enter days for convert into years");
    scanf("%d",&days);
    year=days/365;
    printf("%d days equal to %d year",days,year);
    return 0;
}

