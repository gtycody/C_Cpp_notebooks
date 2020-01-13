#include <stdio.h>
//In C there are several ways to define a String
//define by char str[];
//define by char** str;


int main(){

    // first method
    char str1[4] = "hell";
    printf("%s\n",str1);
    str1 = "byte";
    // str = "bell"; C is not able to change char[] while it has already be modified   
    printf("%s\n",str1);


    //second method
    char* str2;
    str2 = "helloworld";
    printf("%s\n",str2);
    str2 = "byebye";
    printf("%s\n",str2);
    //initialize str by this is using pointer to pointing to a string which we could change
    //the content can be changed when we change the space a pointer pointing at

    return 0;
}