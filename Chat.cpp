#include <iostream>
#include <Windows.h>
#include "Methods.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try {
		Methods methods;
		methods.Menu();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}