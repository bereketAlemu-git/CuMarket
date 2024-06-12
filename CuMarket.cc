#include <iostream>
#include <string>
#include "User.h"
#include "Listing.h"
#include "Price.h"
#include "Category.h"
#include "defs.h"
#include "CuMarket.h"


using namespace std;
//using namespace cat;

CuMarket::CuMarket(){
    this->numUser=0;
    this->numListing=0;
    
}
CuMarket::~CuMarket(){
   for(int i = 0; i<numUser;i++){
    delete this->users[i];
   }
   for(int i = 0; i<numListing;i++){
    delete this->listings[i];
   }
}
void CuMarket::addUser(string name, int rating){
    if(this->numUser < MAX_ARRAY){
        this->users[this->numUser] = new User(name, rating);
        this->numUser++;
    }
    else{
        cout << " Maximum number of users reached." << endl;
    }
}
void CuMarket::addListing(string userName, string title, Category category, string description, Price& price){
    int before=this->numListing;
    if(this->numListing < MAX_ARRAY){
        for(int i = 0; i < this->numUser; i++){
            if(this->users[i]->getName() == userName){
                this->listings[this->numListing] = new Listing(userName, title, 
                category, description, price);
                this->numListing++;
            break;
            }
        }
        if(before == this->numListing){
            cout << "User " << userName << " does not exist." << endl;
        }
    }
    else{
        cout << "Maximum number of listings reached." << endl;
    }
}
void CuMarket::removeUser(string name){
    int before = this->numUser;
    for(int i = 0; i < this->numUser; i++){
        if(this->users[i]->getName() == name){
            removeListingsByUser(this->users[i]->getName());

            delete this->users[i];
            for(int j = i; j < this->numUser - 1; j++){
                this->users[j] = this->users[j+1];
            }
            this->numUser--;
        }
    }
    if(before == this->numUser){
        cout << "User " << name << " does not exist." << endl;
    }
}
void CuMarket::removeListingsByUser(string name) {
     int before = this->numListing;
    for (int i = 0; i < this->numListing; i++) {
        if (this->listings[i]->getUser() == name) {
            delete this->listings[i];
            for (int x = i; x < this->numListing - 1; x++) {
                this->listings[x] = this->listings[x + 1];
            }
            this->numListing--;
        }
    }
    if(before == this->numListing){
        cout << "User " << name << " does not exist." << endl;
    }
}
void CuMarket::removeListing(string title){
    for(int i = 0; i < this->numListing; i++){
        if(this->listings[i]->getTitle() == title){
            delete this->listings[i];
            for(int j = i; j < this->numListing - 1; j++){
                this->listings[j] = this->listings[j+1];
            }
            this->numListing--;
            return;
        }
    }
    cout << "Error: Listing " << title << " does not exist." << endl;
}
void CuMarket::printUsers(){
    cout<<"USERS: "<<endl;
    for(int i = 0; i < this->numUser; i++){
        this->users[i]-> print();
    }
}
void CuMarket::printListings(){
    for(int i = 0; i < this->numListing; i++){
        this->listings[i]->print();
    }
}
void CuMarket::printListingsByUser(string name){
    for(int i = 0; i < this->numListing; i++){
        if(this->listings[i]->getUser() == name){
            this->listings[i]->print();
        }
    }
}
void CuMarket::printListingsByCategory(Category category){
    for(int i = 0; i < this->numListing; i++){
        if(this->listings[i]->getCategory() == category){
            this->listings[i]->print();
        }
    }
}
void CuMarket::printListingsByPrice(Price& min, Price& max){
    for(int i = 0; i < this->numListing; i++){
        if(this->listings[i]->getPrice().inRange(min, max)){
            this->listings[i]->print();
        }
    }
}


