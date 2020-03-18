//
// Created by zhanglu on 2020/3/8.
//
#include "Shape.h"
//分解的方式 在定义，初始化，使用时都会麻烦，不利于扩展
class MainForm : public Form{
    Point p1,p2;
    //分解1 初始化
    vector<Line> lines;
    vector<Rect> rects;
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
    //分解2 使用
    if (rdb.Checked){
        Line line(p1,p2);
        lines.append(line);
    } else{
        Rect rect=Rect(p1,p2);
        rects.append(rect);
    }
    //...
    this->refresh();
    Form::OnMouseUp(e);
}


void MainForm::OnPaint(const MouseEventArgs &e) {
    //分解3 使用
    //for line
    for(int i=0;i=this->lines;i++){
        e.Graphic.DrawLine(e.Color.red,this->lines[i].start,this->lines[i].end);
    }
    //for rect
    for(int i=0;i=this->rects;i++){
        e.Graphic.DrawRect(e.Color.red,this->rects[i].p1,this->lines[i].p2);
    }

}