#include <stdio.h>
#include <stdlib.h>

int main(){
    int a   = 10;
    int* ptr = &a;
    int* ptr1;
    ptr1 = (int *)malloc(sizeof(a));
    printf("%p\n",ptr);
    printf("%p\n",ptr1);
    long distance;
    distance = ptr-ptr1;
    printf("%lu\n",distance/1024/1024/1024);
    return 0;
}