#include <iostream>
#include "signalHandler.h"
#include <chrono>
#include <thread>
#include <memory>

class Notifier: public IObserver<int>{
    public:
    void onMessageRecive(int  msg){
        std::cout << " Receive Message with value " << msg <<std::endl;
    }
    ~Notifier(){
        std::cout<<"Notifier has been Removed !!!!!\n";
    }

};
int main (){
    std::cout<<"Hello World \n";
    SignalHandler sig;
    std::shared_ptr<IObserver<int>> notify= std::make_shared<Notifier>();

    sig.setObserver(1,notify);
    for (int i=0;i<10;i++){
        sig.handleSignal(1,i*5);
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    sig.setObserver(2,NULL);
    sig.handleSignal(2,15);
    return 0; 
}