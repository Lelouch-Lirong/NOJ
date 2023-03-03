/*
起步  <= 2      7
    <=15        1.5
    >15         2.1
向上取整
*/
#include<iostream>
#include<cmath>
using namespace std;

class taxi{
    private:
        double length;
    public:
        double Price(void);
        taxi(double);
};
taxi::taxi(double len = 0){
    this->length = len;
}
double taxi::Price(){
    double money = 0;
    int len = (int)ceil(this->length);

    if(len > 2) {
        money += 7;
    }else{
        return 7;
    }
    if(len > 15){
        money += (15-2)*1.5;
    }else{
        money += (len-2)*1.5;
        return money;
    }
    money += (len-15)*2.1;
    return money;
}

int main()
{
    double len;
    cin >> len;
    taxi t(len);
    printf("%.6lf\n", t.Price());
    return 0;
}