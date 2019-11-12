// In this file I would use some most 
// basic rules to achieve the "list" 
// concept in python

#include <stdio.h>

int main()
{
    int num1 = 1;
    char char1 = 'a';

    void* vp1;
    void* vp2;

    vp1 = &num1;
    vp2 = &char1;

    printf("%d,%c\n",*(int *)vp1,*(char *)vp2);
}


