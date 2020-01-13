#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[] = {20,20,20,20,20,20,20,20,20,20};
    int t = INT_MAX;

    printf("\nsize of arr: %ld\n", sizeof(arr));
    printf("t: %d\n", t);
    for (int i = 0; i < 10; i++)
        printf("%d  ",arr[i]);
    
    

    /* Set sizeof(arr) bytes of arr to t.  */
    memset(arr, t-1, sizeof(arr));

    
    printf("\n\nsize of arr: %ld\n", sizeof(arr));
    printf("t: %d\n", t);
    for (int i = 0; i < 10; i++)
        printf("%d  ",arr[i]);
    

    return 0;
}
