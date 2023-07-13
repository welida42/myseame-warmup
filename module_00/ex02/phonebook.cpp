#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->contacts_count = 0;
	this->contacts_write = 0;
}

void PhoneBook::add(void)
{

		int i = contacts_write % 1000;
		this->contacts[i].add_contact();
		contacts_write++;
		contacts_count++;
		if (contacts_count > 1000)
			contacts_count = 1000;

	std::cout << std::endl << "You input a new contact!" << std::endl;
}

void PhoneBook::remove(void)
{
        std::string str;
		int			number;

        std::cout << "BY INDEX OR PHONE NUMBER? ";
	    std::getline(std::cin, str);
		if (str == "INDEX")
		{
			std::cout << "ENTER INDEX NUMBER: ";
	    	std::getline(std::cin, str);
			number = stoi(str);
			if (number < this->contacts_count)   // <=
			{
				contacts[number].deleted = true;
				std::cout << "contact deleted";
			}
		}
		else if (str == "PHONE NUMBER")
		{
			std::cout << "ENTER PHONE NUMBER: ";
	    	std::getline(std::cin, str);
			number = stoi(str);
			for (int i = 0; i < contacts_count; i++)
			{
				if (number == stoi(contacts[i].get_phonenumber()))   // <=
				{
					contacts[i].deleted = true;
					std::cout << "contact deleted";
				}
			}
		}
		else
			return;

 
    

	//std::cout << std::endl << "You input a new contact!" << std::endl;
}

void PhoneBook::search(void)
{
	std::string bookmark_str;
	std::string number;
	int 		num;

	if (contacts_count == 0)
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
		return;
	}
	std::cout << "     index|      name| phone num|  nickname|bookmarked|" << std::endl;
	for (int i = 0; i < contacts_count; i++)
	{
		if (contacts[i].deleted == false)
			contacts[i].print_one(i);
	}
		
	std::cout << std::endl << "Enter the index: ";
	std::getline(std::cin, number);
	num = stoi(number);

	if (num >= contacts_count || contacts[num].deleted == true)
	{
		std::cout << "Phonebook have not got this index!" << std::endl;
		return;
	}
	for (int i = 0; i < contacts_count; i++)
	{
		if (i == num)
			contacts[i].print_contact();
	}
	std::cout << std::endl << "Do you want to bookmarke this contact?" << std::endl;
	std::getline(std::cin, bookmark_str);
	if (bookmark_str == "YES")
	{
		contacts[num].bookmarked = true;
		std::cout << std::endl << "Contact is bookmarked!" << std::endl;
	}
}

void PhoneBook::bookmark(void)
{
	std::string bookmark_str;
	std::string number;
	int 		num_bookmarked = 0;


	for (int i = 0; i < contacts_count; i++)
	{
		if (contacts[i].bookmarked == true)
			num_bookmarked++;
	}

	if (num_bookmarked == 0)
	{
		std::cout << std::endl << "Bookmarks list is empty!" << std::endl;
		return;
	}
	else
	{
		std::cout << "     index|      name| phone num|  nickname|bookmarked|" << std::endl;
		for (int i = 0; i < contacts_count; i++)
		{
			if (contacts[i].bookmarked == true)
			contacts[i].print_one(i);
		}
	}
}

