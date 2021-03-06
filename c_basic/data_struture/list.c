// In this file I would use some most 
// basic rules to achieve the "list" 
// concept in python Main idea to achieve a array of pointers that could contain
// all types of variables.

// In this array of pointers: 
//      each pointer should be initialized as a void pointer which doesn't have type pre-defined
//      each element a pointer pointing to should be warp with a char[] which contain its type info
//      each element of pointer will have a pointer pointing to the object it represent.

//EXAMPLE:
// int main()
// {
//     int num1 = 1;
//     char char1 = 'a';
//     void* vp1;
//     void* vp2;
//     vp1 = &num1;
//     vp2 = &char1;
//     printf("%d,%c\n",*(int *)vp1,*(char *)vp2);
// }

#include <stdio.h>

//define the structure of the list elements
typedef struct{
    void* object_ptr;
    char* obj_type_name;
}list_elem;

//define the structure of the list
typedef struct{
    list_elem** list_obj;
}list;

//define the functions
int 
append(list *self, list_elem *newitem){

}


int main(){
    list ls1;
    printf("helloworld\n");
    printf("%lu\n",sizeof(ls1.list_obj));
    printf("%d\n",ls1.list_obj == NULL);
    return 0;
}





