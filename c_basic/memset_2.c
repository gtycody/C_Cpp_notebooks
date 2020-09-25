#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long b = 1000;    
    long *a = &b;
    int t = INT_MAX;

    printf("a: %ld\n", *a);
    printf("t: %d\n", t);
    
    // memset: fill the memory block  with selected bit of one target
    memset(a, t, 8);

    
    printf("a: %ld\n", *a);
    printf("t: %d\n", t);
    

    return 0;
}