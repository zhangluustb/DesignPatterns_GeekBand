//
// Created by zhanglu on 2020/3/8.
//
enum TaxBase {
    CN_Tax;
    EN_Tax;
    US_Tax;
    FR_Tax; //更改
};

class SalesOrder {
    TaxBase tax;
public:
    double calculate() {
        //...
        if (tax == CN_Tax) {
            //CN
        } else if (tax == US_Tax) {
            //US
        } else if (tax == EN_Tax) {
            //EN
        } else if (tax == FR_Tax) {  //更改
            //FR
        }
        //...
    }
};