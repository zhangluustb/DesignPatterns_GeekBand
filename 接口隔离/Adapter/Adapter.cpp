//
// Created by zl on 20-3-15.
//

//应对迁移的变化
//source->adapter->target
class ITarget {
    virtual void new_process() = 0;
};

class ISource {
    virtual int old_process() = 0;

    virtual int bar() = 0;
};

class Adapter : public ITarget {
protected:
    ISource *source;
public:
    virtual void new_process() {
        int res = source->old_process();
        source->bar();
    }

};

class OldClass : public ISource {
//...
};

int main() {
    ISource *source = new OldClass();
    ITarget *target = new Adapter(source);
    target->new_process();
}

//类Adapter
class Adapter : public ITarget,
                protected OldClass { //多继承,这种方式不好

};