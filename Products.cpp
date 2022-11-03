
#include "Products.h"
#include <iostream>


void print_prod(product& P) {
	std::cout << "Name = " << P.name << '\n';
	std::cout << "Number = " << P.number << '\n';
	std::cout << "Price = " << P.price << '\n';
}

int full_price(product& P) {
	return P.price * P.number;
}

void sell(product& P, int number) {
	int remains;
	if (number > P.number)
		std::cout << "—только пакетов молока нет на складе.\n";
	else
	remains = P.number - number;
}