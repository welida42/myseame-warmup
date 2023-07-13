#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "contacts.hpp"

class PhoneBook
{
private:
	Contact contacts[1000];
	int 	contacts_count;
	int 	contacts_write;

public:
	PhoneBook(void);
	void	add(void);
	void	search(void);
	void	bookmark(void);
	void	remove(void);
};


# endif