//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <string>
#include "Products.h"


int main() {
	setlocale(LC_ALL, "Russian");
	
	std::cout << "Информация об объекте: \n";
	product milk{ "Milk", 10, 100 };
	print_prod(milk);




















	return 0;
}