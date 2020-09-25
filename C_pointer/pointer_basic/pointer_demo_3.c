#include<stdio.h>


int main()
{
    int a = 7;
    int *x = &a;

    *x = 8;

    printf("%d\n",a);
    printf("%p\n",x);
    
}