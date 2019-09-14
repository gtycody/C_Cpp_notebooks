#include<iostream>
using namespace std;

int main(){
    double GG[6] = {1,2,3,4,5,6};
    double *p = &GG[0];

    for(int i =0; i < 6; i++){
        cout<<*p<<endl;
        cout<<p;
        p++;
        cout<<"--->+1--->"<<p<<endl;
    }
    return 0;i
}
