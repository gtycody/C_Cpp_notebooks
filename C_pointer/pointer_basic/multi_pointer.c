#include <stdio.h>

int main(){
    int a = 6;
    int* ptr;
    ptr = &a;

    int** b = &ptr;
    int*** c = &b;
    int**** d = &c;
    int***** e = &d;

    printf("%d\n",*ptr);
    printf("%d\n",**b);
    printf("%x\n",***c);
    printf("%d\n",****d);
    printf("%x\n",*****e);
}