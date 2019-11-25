#include <stdio.h>

int main(){
    enum weekdays{
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday,
    }day;
    printf("%d\n",Sunday);
    printf("%lu\n",sizeof(Sunday));
    // day = Monday;
    printf("\n%d\n",day);
    printf("%lu\n",sizeof(day));
    return 0;
}

//conclusion:
//1 enum is constant
//2 enum can use in compare
//3 enum is the the constant that record the status
//4 enmu can transfer type with index#