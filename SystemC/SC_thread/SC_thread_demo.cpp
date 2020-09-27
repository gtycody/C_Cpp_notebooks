#include<iostream>
#include <systemc.h>
#include<stdio.h>

using namespace std;
//class module_1:SC_MODULE
class my_module:public sc_module{
    public:
    //Constructor
    SC_HAS_PROCESS(my_module);
    my_module(sc_module_name nm):sc_module(nm){
        SC_THREAD(process_1); //Must in inside of contructor
    }

    //function
    void process_1(){
        cout<<"my_thread_process executed within "<<name()<<endl;
    }
};

int sc_main(int argc, char *argv[]){
    my_module pros_1("instance_1");
    sc_start();
    printf("Helloworld123");
    return 0;
}