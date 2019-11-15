#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr) {
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name,strlen(name)+1 ,name);
	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr,strlen(addr)+1 ,addr);
	cout << "Person instance created(" << name << ")" << endl;
}
Person::~Person() {
	cout << "Person instance deleted(" << name << ")" << endl;
	delete[] name;
	delete[] addr;
}

void Person::print() const {
	cout << "it's " << name << " who lives in " << addr << endl;
}

void Person::changeAddr(const char* newAddr) {
	delete[] addr;
	addr = new char[strlen(newAddr) + 1];
	strcpy_s(addr,strlen(newAddr)+1,newAddr);
}