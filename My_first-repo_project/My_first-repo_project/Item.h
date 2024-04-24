#pragma once

#include <string>

class Item
{
public:
	Item();
	int id;
	std::string type;
	std::string name;
	std::string icon_locate;
	std::string group;
	int stack_size;
	void show_item();
	void get_new_item();
};

