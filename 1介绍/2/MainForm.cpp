//
// Created by zhanglu on 2020/3/8.
//
//这是一个客户程序
#include "Shape.h"
//抽象方式利于扩展
class MainForm : public Form{
    Point p1,p2;
    //整合1 初始化 利用多态
    vector<Shape*> shapes;
public:
    MainForm(){
        //...
    }

protected:
    virtual void OnMouseDown(const MouseEventArgs& e);
    virtual void OnMouseUp(const MouseEventArgs& e);
    virtual void OnPaint(const MouseEventArgs& e);

};

void MainForm::OnMouseDown(const MouseEventArgs &e) {
    this->p1.x=e.p1.x;
    this->p1.y=e.p1.y;

}

void MainForm::OnMouseUp(const MouseEventArgs &e) {
    this->p2.x=e.p1.x;
    this->p2.y=e.p1.y;
    //合并2 使用 待解决 利用工厂就不同改动
    if (rdb.Checked){
        shapes.append(new line(p1,p2));
    } else{
        shapes.append(new Rect(p1,p2));
    }
    //...
    this->refresh();
    Form::OnMouseUp(e);
}


void MainForm::OnPaint(const MouseEventArgs &e) {
    //合并3 使用
    //多态调用 各负其责
    for(int i=0;i=this->shapes;i++){
        shapes[i]->Draw(e);
    }

}