//
// Created by zl on 20-3-15.
//
//对于某些比较复杂的对象,new出来的对象不能满足最好的状态,直接利用clone来代替工厂方法.
//原型的优点是传入的对象状态和输出的状态是相同的

////对比工厂方法
//class ISplitter {
//    virtual void split() = 0;
//};
//
//class ISplitterFactory {
//    virtual ISplitter *CreatSplitter = 0;
//};

//抽象类
class ISplitter {
    virtual void split() = 0;

    virtual ISplitter *clone() = 0;//通过克隆自己来创造对象
    virtual ~ISplitter() {}

};

//具体类
class BinarySplitter : public ISplitter {
public:
    ISplitter *clone() {
        return new BinarySplitter(*this);
    }
};

class VideoSplitter : public ISplitter {
public:
    ISplitter *clone() {
        return new VideoSplitter(*this);
    }
};


//client
class MainForm : public Form {
    ISplitter *prototype;//原型对象
public:
    MainForm(ISplitter *prototype) {
        this->prototype = prototype;
    }

    void btnClick() {
        ISplitter *splitter = prototype->clone();//克隆原型,每次都深克隆一个对象
        splitter->split();
    }
};

//ISplitter *iSplitter = new VideoSplitter();//最不好的用法