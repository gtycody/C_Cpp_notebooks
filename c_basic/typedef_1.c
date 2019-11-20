#include <stdio.h>
#include <stdlib.h>

typedef int my_int;

struct foo{
    my_int a;
    int b;
};

typedef struct foo foo;

typedef struct foo2{
    my_int c;
    my_int a;
}foo1;

typedef struct foo2 foo2;



int main(){
    my_int a = 1;
    printf("%d\n", a);
    printf("%lu\n",sizeof(foo));
    printf("%lu\n",sizeof(foo2));
    printf("%lu\n",sizeof(foo1));

    return 0;
}