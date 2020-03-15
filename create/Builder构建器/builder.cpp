//
// Created by zl on 20-3-15.
//

class House {
public:
    void Init() {//不能用构造函数是因为House这个类会被继承
        this->BuildPart1();
        for (int i = 0; i < 3; i++) {
            this->BuildPart2();
        }
        this->BuildPart3();
        this->BuildPart4();
    }

    virtual ~House() {}


protected:
    virtual void BuildPart1() = 0;

    virtual void BuildPart2() = 0;

    virtual void BuildPart3() = 0;

    virtual void BuildPart4() = 0;
};

class StoneHouse : public House {
protected:
    virtual void BuildPart1() {

    }

    virtual void BuildPart2() {

    }

    virtual void BuildPart3() {

    }

    virtual void BuildPart4() {

    }
}


int main() {
    House *house = new StoneHouse();
    house->Init();
}