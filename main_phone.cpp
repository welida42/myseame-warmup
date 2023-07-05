
#include "phonebook.hpp"

int main(void)
{
	std::string command;
	PhoneBook	book;

	std::cout << "input command (ADD, SEARCH, EXIT, REMOVE, BOOKMARK):" << std::endl;
	while (std::getline(std::cin, command))
	{
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			book.add();
		//	std::cout << std::endl << "ADD one more time" << std::endl;
		else if (command == "SEARCH")
			book.search();
        else if (command == "REMOVE")
            book.remove();
		else if (command == "BOOKMARK")
            book.bookmark();
		else
		{
			std::cout << std::endl << "try one more time" << std::endl;
		}
		std::cout << std::endl << "input command (ADD, SEARCH, EXIT, REMOVE, BOOKMARK):"
			<< std::endl;
	}
	return 0;
}