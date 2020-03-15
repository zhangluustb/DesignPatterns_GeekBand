//
// Created by zl on 20-3-15.
//

//场景:
//对象创建开销很大或者安全问题或是不同进程中的对象访问
//在不失去透明操作同时又能实现额外的功能
//为其他对象实行一个代理

//client->subject
//client->proxy->real_subject

class ISubject {
public:
    virtual void process();
};

class ProxySubject : public ISubject {
public:
    virtual void process() {
        //...
        //实现对realsubject特殊的访问
    }
};

class ClientApp {
    ISubject *iSubject;
public:
    ClientApp() {
        iSubject = new ProxySubject();//可以用工厂模式优化这里
    }

public:
    void DoTask() {
        //...
        iSubject->process();
    }
};