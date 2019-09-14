#include<iostream>

using namespace std;

void swap1(int &a, int &b);
void swap2(int a, int b);
void change(int &aa);




int main()
{
    cout<<"Helloworld"<<endl;
    int* p; 
    int a = 7;
    p = &a;
    cout<<"p:  "<<p<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"a:  "<<a<<endl;
    cout<<"&a: "<<&a<<endl;

    int c = 8;
    int d = 2;
   
    //swap1(c,d);
    //swap2(c,d);

    int aa = 1;
    int *ptr = &aa; 
    change(aa);

    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"aa: "<<aa<<endl;

    //cout<<"c: "<<c<<endl;
    //cout<<"d: "<<d<<endl; 

    return 0;
}

void swap1(int &a, int&b)
{
    int temp = a;
    a = b;
    b = temp;
    return ;
}

void swap2(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return ;
}

void change(int &aa)
{
    aa = 100;
}

