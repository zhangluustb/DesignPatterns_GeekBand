//
// Created by zl on 20-3-15.
//

class ISubject {
public:
    virtual void process();
};

class RealSubject : public ISubject {
public:
    virtual void process() {
        //...
    }
};

class ClientApp {
    ISubject *iSubject;
public:
    ClientApp() {
        iSubject = new RealSubject();
    }

public:
    void DoTask() {
        //...
        iSubject->process();
    }
};