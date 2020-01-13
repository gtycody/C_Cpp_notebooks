#include <stdio.h>
#include <stdlib.h>

int main(){
    int a   = 10;
    int* ptr = &a; //which is store in the stack 
    int* ptr1;
    ptr1 = (int *)malloc(sizeof(a));//which is store at heap
    printf("%p\n",ptr);
    printf("%p\n",ptr1);
    
    long distance;
    distance = ptr-ptr1;
    printf("%lu\n",distance/1024/1024/1024); //distance between stack and heap
    return 0;
}