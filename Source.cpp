//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <string>
#include "Products.h"


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	
	std::cout << "Информация об объекте: \n";
	product milk{ "Milk", 10, 100 };
	print_prod(milk);


	std::cout << "Полная стоимость при покупке всех оставшихся товаров разом: \n";
	std::cout << "Полная стоимость равна " << full_price(milk) << '\n';


	std::cout << "Введите, сколько упаково молока было куплено: \n";
	std::cin >> n;
	
	sell(milk, n);























	return 0;
}