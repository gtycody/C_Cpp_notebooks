#include <stdio.h>
int main()
{
    int *p1;
    void *p2;
    p2 = (void *)p1;
    p2 = (int *)p1;

    int (*a)[];
    int (*a)[10];
    printf("%d\n",*a+4);
    
    int *p3;
    *p3 = 1;
    printf("%d\n",*p3);    
}





