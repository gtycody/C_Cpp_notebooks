#include<iostream>
#include<systemc.h>

using namespace std;

class my_module:public sc_module{
    public:
    sc_event a_event;
    SC_HAS_PROCESS(my_module);
    my_module(sc_module_name nm):sc_module(nm){
        //SC_THREAD(process_1);
        SC_THREAD(B_thread);
        SC_THREAD(A_thread);
        SC_THREAD(C_thread);
    }
    void process_1(){
        cout<<"my_thread_process executed within "<<name()<<endl;
    }
    void A_thread(){
        cout<<"enter A_thread"<<endl;
        a_event.notify(SC_ZERO_TIME);
        cout<<"A send a_event"<<endl;
    }
    void B_thread(){
        cout<<"enter B_thread"<<endl;
        wait(a_event);
        cout<<"B got a_event!"<<endl;
    }
    void C_thread(){
        cout<<"enter C_thread"<<endl;
        wait(a_event);
        cout<<"C got a_event!"<<endl;
    }
};

int sc_main(int argc, char* argv[]){
    cout<<"\n"<<sizeof(sc_time_stamp())<<endl;
    my_module instance1("instance_1");
    sc_start();
    return 0;

}
