#ifndef User_H
#define User_H

#include <iostream>
#include <string>
#include "defs.h"

using namespace std;

class User{
    private:
        int rating;
        string name;

    public:
        User(string name, int rating);
        bool lessThan(User& user);;
        string getName();
        int getRating();
        int setRating(int rating);
        void print();
        //ANY OTHER FUNCTION YOU MIGHT NEED

};
#endif