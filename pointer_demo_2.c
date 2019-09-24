#include <stdio.h>
int main()
{
    int *p1;
    void *p2;
    p2 = (void *)p1;
    p2 = (int *)p1;

    int (*a)[10];
    printf("%p\n",a);
}





