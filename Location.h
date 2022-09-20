
#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Location {

	public:
		//constructor
		Location(char,int);

		//destructor
		~Location();

		//getters
		string getId();
		string getProduct();
		int getQuantity();

		//other
		bool isEmpty();
		bool isAvailable();
		void print();

		//virtual functions
		virtual int getCapacity()=0;
		virtual bool add(std::string name,int quantity)=0;
		virtual bool remove(int quantity)=0;

	protected:
		std::string id;
		std::string product;
		int quantity;
		const std::string NONE = "Empty";


};
#endif
