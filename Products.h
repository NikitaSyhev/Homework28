#pragma once
#include <iostream>
#include <string>

struct product {
	std::string name;
	int number = 0;
	int price;
};


void print_prod(product &P);
int full_price(product &P);
int sell(product& P, int number);