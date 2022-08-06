#include<stdio.h>

int main() {
    int a=6,a=7;
    printf("choose option 1 for addition\n");
    printf("choose option 2 for substractio\n");
    printf("choose option 3 for multiplication\n");
    printf("choose option 4 for division\n");
    printf("please select any option:");
    scanf("%d",&option);

    switch(option)
    {
        case 1:
        printf("addition is %d,a,b,a+b");
        break;
        case 2:
        printf("substractio is %d,a,b,a-b");
        break;
        case 3:
        printf("multiplication is %d,a,b,a*b");
        break;
        printf("division is %d,a,b,a/b");
        break;
        default:
        printf("please choose valid option");
        break;
    }
    return 0;
}
