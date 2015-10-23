#include <iostream>
using namespace std;
#include "Singleton.h"

Singleton* Singleton::obj = NULL;

Singleton::Singleton() {
	isInstance = false;
}

Singleton::Singleton(Singleton const &o) {};
//Singleton::Singleton& operator = (Singleton const &o) {};
//Singleton::Singleton& operator = (Singleton const &o) {};
Singleton *Singleton::getInstance() {

	if (!obj) {
		obj = new Singleton ();
	}
	return obj;
}

int Singleton::doWork(void) {

	static int i = 0;
	cout << i++ << endl;

	return i;
}