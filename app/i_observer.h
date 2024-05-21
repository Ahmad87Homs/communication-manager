template<typename MsgTyp>
class IObserver{
    public:
    IObserver()=default;
    virtual ~IObserver()=default;
    
    virtual void onMessageRecive(MsgTyp msg)=0;
};