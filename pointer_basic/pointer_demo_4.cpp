#include <iostream>

using namespace std;

int main()
{
    void* a;
    int* ptr;

    a = (int *)a;
    int num = 0;
    a = &num;
    void *a2;
    a2 = &a;
    cout<<a<<endl; //void pointer cannot point
    cout<<a2<<endl;

    int x = 10;
    void *void_ptr;
    void_ptr = &x;
    cout<<*(int *)void_ptr<<endl;
}