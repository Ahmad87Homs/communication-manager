#include "signalHandler.h"


void SignalHandler::setObserver(int topicId,std::shared_ptr<IObserver<int>> observer){
    observer_list_.emplace(topicId,observer);
}
void SignalHandler::removeObserver(int topicId,std::shared_ptr<IObserver<int>> observer){
    auto it = observer_list_.find(topicId);
    if (it !=observer_list_.end()){
        observer_list_.erase(it->first);
    }

}
void SignalHandler::handleSignal(int id,int val){
    auto it = observer_list_.find(id);
    if (it !=observer_list_.end()){
        std::cout<<"Call the Server with id "<<id <<" \n";
        if(it->second)
        it->second->onMessageRecive(val);
        else 
        std::cout<<"No Notifier is allocated !!!!!! \n";
    }

}