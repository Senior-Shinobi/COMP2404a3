
#include "WHLocation.h"

int WHLocation::nextId = 1;

WHLocation::WHLocation() : Location(code,nextId++){

}

WHLocation::~WHLocation(){
}

int WHLocation::getCapacity(){
	return capacity;
}

bool WHLocation::add(std::string n, int c){
	if (isAvailable() && c <= capacity){
		product = n;
		quantity = c;
	}
	return false;

}

bool WHLocation::remove(int c){

	if (c>getQuantity()){
		return false;
	}
	quantity-=c;
	if ((getQuantity()-c) <= 0){
		product = NONE;
		quantity = 0;
	}

	return true;
}

void WHLocation::print(){
	cout<<endl;
	cout << "capacity: "<< capacity <<endl;
	cout << "next id: "<< nextId <<endl;
	cout << "code: "<< code <<endl;
	Location::print();
}
