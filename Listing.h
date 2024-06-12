#ifndef LISTING_H
#define LISTING_H

#include "Price.h"
#include "Category.h"
#include "defs.h"

using namespace std;
using namespace cat;

#include <iostream>
#include <string>

class Listing{
    private:
        string user;
        string title;
        string description;
        Category category;
        Price price;
        int numUser;

    public:
        Listing(string user, string title, Category category, string description, Price& price);
        bool lessThan(Listing& listing);
        void print();
        string getUser();
        string getTitle();
        string getDescription();
        Category getCategory();
        Price getPrice();
        void toString();
        
        //ANY OTHER FUNCTION YOU MIGHT NEED

};



#endif

