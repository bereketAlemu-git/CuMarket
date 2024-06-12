/*The User class stores the name and rating of a user, i.e., someone with an account on CuMarket who can add a
Listing of an item they want to sell.
1. Data members:
(a) int rating: You should ensure this has a value from 0 to 5.
(b) A string: name. For the purposes of this assignment we will assume that the name serves as a unique
identifier, i.e., no two Users have the same name.
2. Make a constructor that takes a name and a rating, in that order, and initializes the member variables.
3. Member functions:
(a) Make a bool lessThan(User& user) function. This should correspond to alphabetical order by name.
That is, if this− >name comes before user.name in alphabetical order, return true, otherwise return
false.
(b) A print function that prints out the User’s name and rating.
(c) Any other function you might need.

2. User - an entity class containing the name and rating of a CuMarket user.
*/

#include <iostream>
#include <string>
#include "User.h"

using namespace std;
User::User(string name, int rating){
    this->name = name;
    //ensures the rating is between 0 to 5
    this->rating = setRating(rating);
}

bool User::lessThan(User& user){
    return (this->name < user.name);
}

void User::print(){
    cout << this->name << " (" << this->rating << ")" << endl;
}

string User::getName(){
    return this->name;
}

int User::getRating(){
    return this->rating;
}

int User::setRating(int rating){
    if(rating<0){
        this->rating =0;
    }else if(rating>5){
        this->rating=5;
    }else{
        this->rating=rating;
    }
    return this->rating;
}

//ANY OTHER FUNCTION YOU MIGHT NEED

