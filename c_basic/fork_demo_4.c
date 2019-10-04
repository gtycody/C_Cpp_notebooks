#include <stdio.h>
#include <unistd.h>

//---------------------------------------------------
//                                                  |
//      becasue process are not sharing memory      |
//      space so its not possible to change         |
//                                                  |
//---------------------------------------------------


int main()
{
    int max = 0;
    int *p = &max;
    int pid = fork();
    //int max = 10;

    printf("%p\n", &max);

   if(pid == 0)
   {
       printf("before %d\n",*p);
       *p = 3;
       printf("I am the child process %p\n",&max);
       printf("after %d\n",*p);
   }
   else
   {
       printf("before %d\n",*p);
       *p = 4;
       printf("I am the parent process %p\n",&max);
       printf("after %d\n",*p);
   } 
    return 0;
}
