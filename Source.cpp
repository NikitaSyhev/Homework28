//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include <string>
#include "Products.h"


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	
	std::cout << "���������� �� �������: \n";
	product milk{ "Milk", 10, 100 };
	print_prod(milk);


	std::cout << "������ ��������� ��� ������� ���� ���������� ������� �����: \n";
	std::cout << "������ ��������� ����� " << full_price(milk) << '\n';


	std::cout << "�������, ������� ������� ������ ���� �������: \n";
	std::cin >> n;
	
	sell(milk, n);























	return 0;
}