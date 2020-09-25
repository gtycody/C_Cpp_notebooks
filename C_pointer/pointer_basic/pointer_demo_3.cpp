#include <iostream>

using namespace std;

int main()
{
    cout<<"helloworld"<<endl;
    int a = 10;
    int* p = &a;
    int *p3 = &*p;
    int** p4 = &p; //p is already a pointer
    cout<<p<<endl;
    //void* p2 = &*p;

    //cout<<p2<<endl;
    //cout<<*p2<<endl;
    cout << p3 <<endl;
    cout << *p3 << endl;
    cout <<p4<<endl;
}
