
#include "Location.h"
//constuctor
Location::Location(char n, int num){
	id = n + std::to_string(num);
	//std::cout<< std::string("hello ")<<id<<n<<std::endl;
	quantity = 0;
	product = NONE;
}


Location::~Location(){
}

//getter functions
std::string Location::getId(){
	return id;
}

std::string Location::getProduct(){
	return product;
}

int Location::getQuantity(){
	return quantity;
}

//other functions
bool Location::isEmpty(){
	return (quantity == 0);
}

bool Location::isAvailable(){
	return (product == NONE);
}

void Location::print(){
	cout<<endl;
	cout << "id: "<< id <<endl;
	cout << "quantity: "<< quantity <<endl;
	cout << "product: "<<product<<endl<<endl;
}
