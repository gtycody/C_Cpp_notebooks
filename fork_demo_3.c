#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("helloworld\n");
    //fork(); //fork is always the enter of another process
    int i = fork(); //and we usually use int i to catch the throw out of fork
    if (i == 1)
    {
        printf("helloworld %d\n",i);
    }
    else if(i == 0)
    {
        printf("error %d\n",i); 
    }
    else
    {
        printf("it goes to else %d\n",i);
    }

    return 0;
}
