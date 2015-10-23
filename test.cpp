#include <iostream>
using namespace std;
#include "Singleton.h"

int main(void) {

	Singleton *obj = Singleton::getInstance();

	int iii = 1;
	while (obj && iii) {
		cin >> iii;
		obj->doWork();
	}



	return 0;
}