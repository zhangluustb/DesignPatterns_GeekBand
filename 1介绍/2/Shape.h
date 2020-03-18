//
// Created by zhanglu on 2020/3/8.
//

#ifndef DESIGNPATTERNS_GEEKBAND_MASTER_SHAPE_H
#define DESIGNPATTERNS_GEEKBAND_MASTER_SHAPE_H


class Shape {
public:
    virtual void Draw(const Graphic &g) = 0;

    virtual ~Shape() {}
};

class Point {
    int x;
    int y;
};

class Line : public Shape {
public:
    Point start, end;
    Line(Point& start,Point& end){
        this->start=start;
        this->end=end;
    };
    //实现自己的Draw 负责画自己
    virtual void Draw(const Graphic &g){
        g.DrawLine(red,this->start,this->end);
    };
};

class Rect : public Shape {
public:
    Point start, end;
    Line(Point& start,Point& end){
        this->start=start;
        this->end=end;
    };
    //实现自己的Draw 负责画自己
    virtual void Draw(const Graphic &g){
        g.DrawRect(red,this->start,this->end);
    };
};

//业务需求变动，添加circle类
class Circle : public Shape{
public:
    Point center;
    int r;
    Circle(Point& center,int r){
        this->center=center;
        this->r=r;
    }
    //实现自己的Draw 负责画自己
    virtual void Draw(const Graphic &g){
        g.DrawCircle(red,this->center,this->r);
    };
};
#endif //DESIGNPATTERNS_GEEKBAND_MASTER_SHAPE_H
