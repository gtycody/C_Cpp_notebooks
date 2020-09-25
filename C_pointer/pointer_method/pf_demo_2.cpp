#include <stdio.h>

void change_value(int * int_i){
    *int_i = 10;
    return;
}

int main(){
    int int_i = 20;
    change_value(&int_i);
    printf("%d\n",int_i);
    return 0;
}