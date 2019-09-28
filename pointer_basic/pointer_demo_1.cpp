#include <iostream>
#include <string>

using namespace std;

int main(){
    int * ptr;
    string str;
    
    cout<<ptr<<endl;

    int n = 3;
    ptr = & n;
    
    int &e = n;
    
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<e<<endl;
    e = 5;
    
    cout<<n<<endl;
    
    return 0;
}
