#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("parent pid is %d\n",getpid());
    //fork(); //fork is always the enter of another process
    int i = fork(); //and we usually use int i to catch the throw out of fork
    printf("%d\n",i);
    if (i < 0)
    {
        printf("error %d\n",i);
    }
    else if(i == 0)
    {
        printf("i am the child process %d\n",i); 
    }
    else
    {
        printf("i am the parent process %d\n",i);
    }
    return 0;
}
