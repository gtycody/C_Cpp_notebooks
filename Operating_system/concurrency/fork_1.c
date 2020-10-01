#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    printf("helloworld\n");    
    
    int pd, num = 10;

    pd = fork();
    pd = fork();
    pd = fork();

    if(pd == 0){
        printf("I am parent my id is:%d\n",pd);
    }else{
        printf("I am child my id is:%d\n",pd);
    }
    
    return 0;
}