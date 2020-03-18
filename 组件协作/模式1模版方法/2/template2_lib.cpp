//
// Created by zhanglu on 2020/3/8.
//
//库开发人员
class Library {
public:
    //稳定
    Run() {//稳定
        step1();
        if (step2()) {
            step3();
        }
        for (int i = 0; i < 4; i++) {
            step4();
        }
        step5();
    }
    virtual ~Library(){}
protected:
    void step1() {//稳定
        //..
    }

    void step3() {//稳定
        //..
    }

    void step5() {//稳定
        //..
    }

    virtual void step2() = 0;//变化

    virtual void step4() = 0;//变化
};

