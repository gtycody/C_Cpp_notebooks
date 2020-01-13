#include <iostream>

using namespace std;

int main()
{
    int p1;
    int *p2;
    cout<<typeid(p2).name()<<endl;
    cout<<typeid(p1).name()<<endl;
}

