#include<stdio.h>
int main() {
    int a=100,b=16,c=36;
    if(a>b)
    {
    if(a>c)
    {
        printf("A is greater");
    }
    else{
        printf("c is greater");
    }
    }
else
{
    if(b>c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is greater");
    }
}
return 0;
}