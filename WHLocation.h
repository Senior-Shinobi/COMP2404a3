
#ifndef WHLOCATION_H
#define WHLOCATION_H

#include <iostream>
#include <string>
#include <iomanip>
#include "defs.h"
#include "Location.h"

using namespace std;

class WHLocation : public Location {

	public:
		//constructor
		WHLocation();

		//destructor
		~WHLocation();

		void print();

		//virtual functions
		virtual int getCapacity();
		virtual bool add(std::string name,int quantity);
		virtual bool remove(int quantity);

	private:
		static const char code = 'A';
		static const int capacity = SLOC_CAPACITY;
		static int nextId;

};
#endif
