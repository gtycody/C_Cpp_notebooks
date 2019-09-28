#include<iostream>

using namespace std;

void foo(int* ptr, int &addr)
{
    *ptr = 20;
    addr = 10;
}
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void swap1(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int &x, int &y){
    cout<<&x<<" "<<&y<<endl;
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a1 = 0;
    foo(&a1,a1);
    printf("%d\n",a1);
    int a=1,b=2;
    swap(a,b);
    swap1(&a,&b);
    printf("%d,%d\n",a,b);
    swap2(a,b);
    printf("%d,%d\n",a,b);
}


