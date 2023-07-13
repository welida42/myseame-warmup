#include "ClassCar.hpp"

ClassCar::ClassCar(std::string name, unsigned int speed)
{
	this->name = name;
	this->speed = speed;
	std::cout << "ClassCar constructor called" << std::endl;
    std::cout << "name = " << name << " speed = " << speed << std::endl;
}

ClassCar::~ClassCar()
{
	std::cout << "ClassCar destructor called" << std::endl;
}

ClassCar::ClassCar(const ClassCar &old)
{
	std::cout << "ClassCar Copy constructor called" << std::endl;
	*this = old;
}

ClassCar &ClassCar::operator=(const ClassCar &operand)
{
	std::cout << "ClassCar Assignation operator called" << std::endl;
	name = operand.name;
	speed = operand.speed;
	return *this;
}
