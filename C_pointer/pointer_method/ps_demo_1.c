#include <stdlib.h>
#include <stdio.h>

struct student{
    int age;
    char* name;
    int gender;
};

void Frank_init(struct student * Frank_i){
    Frank_i->age = 10;
    Frank_i->gender = 1;
    Frank_i->name = "FRANK";
}

int main(){
    int a = 10;
    int *b = &a;
    struct student Frank;
    struct student* Amy;
    printf("%d\n",*b);
    Frank_init(&Frank);
    printf("%d\n",Frank.age);
    return 0;
}