#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Price.h"
using namespace std;

Price::Price(double value){
    this->value = value;
}
Price::Price(){
    this->value = 0.0;
}

bool Price::lessThan(Price& p){
    return (this->value < p.value);
}
bool Price::equals(Price& p){
    return (this->value == p.value);
}

bool Price::inRange(Price& min, Price& max){
    return (this->value >= min.value && this->value <= max.value);
}
void Price::print(){
    
    cout<<"$"<<fixed<<setprecision(2)<<this->getValue()<<endl;
}
