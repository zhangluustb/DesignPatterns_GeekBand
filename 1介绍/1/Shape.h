//
// Created by zhanglu on 2020/3/8.
//

#ifndef DESIGNPATTERNS_GEEKBAND_MASTER_SHAPE_H
#define DESIGNPATTERNS_GEEKBAND_MASTER_SHAPE_H

class Point {
public:
    int x;
    int y;
};

class Line {
public:
    Point start;
    Point end;
    Line(Point& start,Point& end){
        this->start=start;
        this->end=end;
    }
};

class Rect {
public:
    Point p1,p2;
    Rect(Point& p1,Point& p1){
        this->p1=p1;
        this->p2=p2;
    }
};


#endif //DESIGNPATTERNS_GEEKBAND_MASTER_SHAPE_H
