//
// Created by zhanglu on 2020/3/8.
//

//
// Created by zhanglu on 2020/3/8.
//
class TaxStrategy {
public:
    virtual double calculate(const Context &context) = 0;

    ~TaxStrategy() {}
};

class CNTax : public TaxStrategy {
public:
    virtual double calculate(const Context &context) {
        //...
    }
};
//变化
class FRTax : public TaxStrategy {
public:
    virtual double calculate(const Context &context) {
        //...
    }
};

class ENTax : public TaxStrategy {
public:
    virtual double calculate(const Context &context) {
        //...
    }
};

class USTax : public TaxStrategy {
public:
    virtual double calculate(const Context &context) {
        //...
    }
};

class SalesOrder{
private:
    TaxStrategy* taxStrategy;
public:
    SalesOrder(StrategyFactory* strategyFactory){
        this->taxStrategy=strategyFactory.NewStrategy();
    }
    ~SalesOrder(){
        del this->taxStrategy;
    }
    double calculate(){
        //..
        Context context();
        double val=this->taxStrategy->calculate();//多态调用
        //..
    }

};