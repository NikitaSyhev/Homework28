
#include "Products.h"
#include <iostream>


void print_prod(product& P) {
	std::cout << "Name = " << P.name << '\n';
	std::cout << "Number = " << P.number << '\n';
	std::cout << "Price = " << P.price << '\n';
}
