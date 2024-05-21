#include <iostream>
#include <map>
#include <algorithm>
#include "i_observer.h"
#include <memory>

class SignalHandler{

public:
    SignalHandler()=default;

    void setObserver(int topicId,std::shared_ptr<IObserver<int>> observer);
    void removeObserver(int topicId,std::shared_ptr<IObserver<int>> observer);
    void handleSignal(int id,int val);
private:
 std::map<int,std::shared_ptr<IObserver<int>>> observer_list_;
};