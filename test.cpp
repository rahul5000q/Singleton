#include <iostream>
using namespace std;
#include "Singleton.h"

int main(void) {

	Singleton *obj = Singleton::getInstance();

	int iii = 1;

	// loop quits when input form keborad
	// is digit zero "0".
	while (obj && iii) {
		cin >> iii;
		obj->doWork();
	}



	return 0;
}