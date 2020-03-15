//
// Created by zl on 20-3-15.
//
class Singleton {
private:
    Singleton();

    Singleton(const Singleton &other);

public:
    static Singleton *getInstance();

    static Singleton *m_instance;
};

//线程非安全
Singleton *Singleton::m_instance = nullptr;

Singleton *Singleton::getInstance() {
    if (m_instance != nullptr) {
        m_instance = new Singleton();
    }
    return m_instance;
}

//线程安全,加锁,成本太高
Singleton *Singleton::getInstance() {
    Lock lock;
    if (m_instance != nullptr) {
        m_instance = new Singleton();
    }
    return m_instance;
}

//双检查锁,但由于内存读写reorder不安全 2000年发现的 不要用
Singleton *Singleton::getInstance() {
    if (m_instance == nullptr) {
        Lock lock;
        if (m_instance == nullptr) {
            m_instance = new Singleton();
        }
    }
    return m_instance;
}

//c++ 11版本
//代码比较复杂