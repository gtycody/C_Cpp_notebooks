#include <iostream>
#include <systemc.h>

using namespace std;

class my_modules:public sc_module{

    public:
    //constructor
    SC_HAS_PROCESS(my_modules);
    my_modules(sc_module_name nm):sc_module(nm){
        // printf("instance on");
        SC_THREAD(turn_knob_thread);
        SC_THREAD(stop_signal_thread);
    }

    sc_event signal_stop, signals_off;
    sc_event stop_indicator_on, stop_indicator_off;

    void turn_knob_thread(){
        enum directions {STOP = 'S', OFF='F'};
        char directions;
        bool did_stop = false;

        wait(SC_ZERO_TIME);
        printf("T1  start\n");
        while(true){
            cout <<"Signal command: ";
            cin >> directions;
            switch (directions){
                case STOP:
                    //make sure other signals are off
                    signals_off.notify();
                    printf("T1  signal_off notified\n");
                    signal_stop.notify();//turn stop light on
                    printf("T1  signal stop notified\n");
                    printf("T1  start to wait stop indicator\n");
                    wait(stop_indicator_on);
                    did_stop = true;
                    break; // break only exit switch 
                case OFF:
                    //Make the other signals are off
                    signals_off.notify();
                    printf("T1  signal_off notified\n");
                    if(did_stop){
                        wait(stop_indicator_off);
                    }
                    did_stop = false;
                    break;
            }//endswitch
        }//endforever
        printf("T1 end\n");
    }//end turn_knob_thread()
    
    
    void stop_signal_thread(){
        printf("T2  start\n");
        while(true){
            printf("T2  start to wait for signal stop\n");
            wait(signal_stop);
            cout<<"T2  receive signal_stop"<<endl;
            stop_indicator_on.notify();
            printf("T2  start to wait for signal off\n");
            wait(signals_off);
            cout <<"T2  receive signal_off"<<endl;
            stop_indicator_off.notify();
        }//endforever
    }//end stop_signal_thread
};

int sc_main(int argc, char* argv[]){
    my_modules instance1("instance_1");
    sc_start();
    // printf("Helloworld123");
    return 0;
}