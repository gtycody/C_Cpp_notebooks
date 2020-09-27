#include<iostream>
#include<systemc.h>

using namespace std;

SC_MODULE(my_module){
    //constructor
    SC_CTOR(my_module){
        SC_THREAD(run);
    }

    //function
    void run(){
        cout<<"the process name is:"<< name()<<endl;
    }
};

int sc_main(int args, char* argv[]){
    my_module instance1("instance_1");
    sc_start();
    return 0;
}