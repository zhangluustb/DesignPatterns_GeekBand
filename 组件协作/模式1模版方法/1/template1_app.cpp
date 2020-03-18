//
// Created by zhanglu on 2020/3/8.
//
//应用开发人员
#include "template1_lib.cpp"
class App {
public:
    void step2() {
        //..
    }

    void step4() {
        //..
    }
};

int main(){
    Library lib;
    App app;
    lib.step1();
    if (app.step2()){
        lib.step3();
    }
    for(int i=0;i<4;i++){
        app.step4();
    }
    lib.step5();
}
