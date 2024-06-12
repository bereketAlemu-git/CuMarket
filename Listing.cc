#include "Listing.h"
#include "Price.h"
#include "Category.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
using namespace cat;
Listing::Listing(string user, string title, Category category, string description, Price& price){
    this->user = user;
    this->title = title;
    this->category = category;
    this->description = description;
    this->price = price;
}
bool Listing::lessThan(Listing& listing){
    return (this->title < listing.title);
}
void Listing::print(){
    cout << "User:        " << this->user << endl;
    cout << "Title:       " << this->title << endl;
    cout << "Category:    " << categoryToString(this->category) << endl;
    cout << "Description: " << this->description << endl;
    cout << "Price:       " << "$"<<fixed<<setprecision(2)<<this->price.getValue() <<endl;
}
string Listing::getUser(){
    return this->user;
}
string Listing::getTitle(){
    return this->title;
}
string Listing::getDescription(){
    return this->description;
}
Category Listing::getCategory(){
    return this->category;
}
Price Listing::getPrice(){
    return this->price;
}


