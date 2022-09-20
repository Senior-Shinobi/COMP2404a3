
#include "StoreLocation.h"

int StoreLocation::nextId = 1;

StoreLocation::StoreLocation() : Location(code,nextId++){

}

StoreLocation::~StoreLocation(){
}

void StoreLocation::setProduct(std::string s){
	product = s;
}

int StoreLocation::getFreeSpace(){
	return (capacity - getQuantity());
}

int StoreLocation::getCapacity(){
	return capacity;
}

bool StoreLocation::add(std::string n, int c){
	if (n == getProduct()){
		if (c+quantity>capacity){
			quantity = capacity;
		} else {
			quantity+=c;
		}
		return true;
	}
	return false;
	
}

bool StoreLocation::remove(int c){

	if (c>getQuantity()){
		return false;
	}
	quantity-=c;
	return true;
}

void StoreLocation::print(){
	cout<<endl;
	cout << "capacity: "<< capacity <<endl;
	cout << "next id: "<< nextId <<endl;
	cout << "code: "<< code <<endl;
	Location::print();
}
