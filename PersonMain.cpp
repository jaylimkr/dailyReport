#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person	*p1 = new Person("Kim","jongno");
	Person	*p2 = new Person("Lim","gwangju");
	
	p1->print();
	p2->print();
	
	cout << endl;
	p1->changeAddr("pangyo");
	p1->print();
	
	delete[] p1;
	delete[] p2;
	return 0;
}