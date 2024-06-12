#ifndef PRICE_H
#define PRICE_H

#include <iostream>
#include <string>
#include <sstream>

#include "defs.h"

using namespace std;

class Price {
		
	public:
		//constructor
		Price(double value);
		Price();

		bool lessThan(Price& p);
		bool equals(Price& p);	

		bool inRange(Price& min, Price& max);
		
		void print();

		double getValue(){
        	return value;
    	}
	
	private:
		double value;
	
};
#endif