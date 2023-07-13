#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
private:
	std::string	index;
	std::string	firstname;
	std::string	nickname;
	std::string	phonenumber;


public:
	bool		bookmarked = false;
	bool		deleted = false;
	std::string	get_phonenumber(void) {return phonenumber;}

	void		print_contact(void);
	void 		add_contact(void);
	void 		print_one(int i);
	std::string	str_handler(std::string value);
};

# endif