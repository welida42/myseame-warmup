#include "phonebook.hpp"

void Contact::add_contact(void)
{
	std::string str;

	std::cout << "name: ";
	std::getline(std::cin, str);
	this->firstname.assign(str);
	std::cout << "nickname: ";
	std::getline(std::cin, str);
	this->nickname.assign(str);
	std::cout << "phone number: ";
	std::getline(std::cin, str);
	this->phonenumber.assign(str);
}

std::string	Contact::str_handler(std::string value)
{
	std::string	str;

	str = value;
	if (value.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void Contact::print_one(int i)
{
	std::cout << std::setw(10) << i << '|';
	std::cout << std::setw(10) << this->str_handler(firstname) << '|';
	std::cout << std::setw(10) << this->str_handler(phonenumber) << '|';
	std::cout << std::setw(10) << this->str_handler(nickname) << '|';
	std::cout << std::setw(10) << this->bookmarked << '|';
	std::cout << std::endl;
}

void Contact::print_contact(void)
{
	std::cout << "name: " << firstname << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone number: " << phonenumber << std::endl;
	std::cout << "bookmarked: " << bookmarked << std::endl;
}