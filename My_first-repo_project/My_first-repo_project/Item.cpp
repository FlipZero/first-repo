#include <iostream>
#include "Item.h"

Item::Item() {
	std::cout << ">Open class<\n";

}

void Item::show_item()
{
	std::cout << "Your item: ";
}

void Item::get_new_item()
{
	std::cout << "Enter new item name: ";
	std::cin >> name;
	std::cout << "You enter: " << name;
}