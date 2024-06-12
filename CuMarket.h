#ifndef CuMarket_H
#define CuMarket_H

#include <iostream>
#include <string>
#include "User.h"
#include "Listing.h"
#include "Price.h"
#include "Category.h"
#include "defs.h"



using namespace std;
using namespace cat;


class CuMarket
{
    public:
        CuMarket();
        ~CuMarket();
        void addUser(string name, int rating);
        void addListing(string userName, string title, Category category, 
            string description, Price& price);
        void removeUser(string name);
        void removeListing(string title);
        void removeListingsByUser(string name);
        void printUsers();
        void printListings();
        void printListingsByUser(string name);
        void printListingsByCategory(Category category);
        void printListingsByPrice(Price& min, Price& max);
    private:
        User* users[MAX_ARRAY];
        Listing* listings[MAX_ARRAY];
        int numUser;
        int numListing;

        
};
#endif
