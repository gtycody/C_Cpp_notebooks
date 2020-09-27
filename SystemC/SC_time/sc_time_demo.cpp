#include <stdio.h>
#include <systemc.h>
#include <iostream>
#include <typeinfo>

using namespace std;

class module_1:public sc_module{
    public:
    //constructor
    SC_HAS_PROCESS(module_1);
    module_1(sc_module_name nm):sc_module(nm){
        SC_THREAD(run);
    }

    //function_1
    void run(){
        // sc_time t_NOW;
        sc_time t_DELAY(5,SC_MS);
        // t_NOW = sc_time_stamp();
        cout<<"the time now is: "<<sc_time_stamp()<<endl;
        wait(t_DELAY);
        // t_NOW = sc_time_stamp();
        cout<<"the time now is: "<<sc_time_stamp()<<endl;
    }
};


int sc_main(int argc, char *argv[]) {
    sc_time t_PERIOD (5, SC_NS);
    sc_time t_TIMEOUT (100, SC_MS);
    sc_time t_INIT (20,SC_SEC);
    sc_time current_time = sc_time_stamp();

    cout<<t_PERIOD<<" and size of sc_time: "<<sizeof(t_PERIOD)<<endl;
    cout<<t_TIMEOUT<<" and size of sc_time: "<<sizeof(t_TIMEOUT)<<endl;
    cout<<t_INIT<<" and size of sc_time: "<<sizeof(t_INIT)<<endl;
    cout<<current_time<<" and size of sc_time: "<<sizeof(current_time)<<endl;
    
    
    module_1 instance1("instance1");
    
    //start simulation should placed after instance.
    sc_start();

    return 0;
}