#include "ClassCar.hpp"

ClassCar::ClassCar()
{
	this->make = "lada";
	this->model = "kalina";
	this->year = 2000;

	engine_ = std::shared_ptr<Engine> (new Engine());
	for (int i = 0; i < 4; ++i) 
	{
            wheels_[i] = std::shared_ptr<Wheel> (new Wheel());
            brakes_[i] = std::shared_ptr<Brake> (new Brake());
    }

    transmission_ = std::shared_ptr<Transmission> (new Transmission());

	std::cout << "ClassCar default constructor called" << std::endl;
    std::cout << "make = " << make << " model = " << model <<  " year = " << year << std::endl;
}

ClassCar::ClassCar(std::string make, std::string model, unsigned int year)
{
	this->make = make;
	this->model = model;
	this->year = year;

	std::cout << "ClassCar constructor called" << std::endl;
    std::cout << "make = " << make << " model = " << model <<  " year = " << year << std::endl;
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
	this->make = operand.make;
	this->model = operand.model;
	this->year = operand.year;

	return *this;
}

void ClassCar::	drive()
{
	std::cout << "Driving " << make << " " << model << " " << year << " edition" << std::endl;
}

void ClassCar::	 printParts() 
{
        engine_->print();
        for (int i = 0; i < 4; ++i) {
            wheels_[i]->print();
            brakes_[i]->print();
        }
        transmission_->print();
}
