//
// Created by zhanglu on 2020/3/8.
//
//应用开发人员
#include "template2_lib.cpp"
class App : public Library{
protected:
    virtual void step2() {
        //子类重写实现
    }

    virtual void step4() {
        //子类重写实现
    }
};

int main(){
   Library* pLib=new App;
   pLib->Run();

   del pLib;

}
