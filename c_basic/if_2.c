#include <stdio.h>

/*in C the number 0 and others could determine the True 
 * or false value
 */

int main()
{
    int a;
    a=10000;
    if(!(a))
    {
        printf("helloworld\n");
        printf("%d\n",(a));
    }else
    {
        printf("%d\n",a);
    }
}
