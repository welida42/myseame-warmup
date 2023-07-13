#include "ClassSportsCar.hpp"
#include "ClassCar.hpp"


ClassSportsCar::ClassSportsCar() : ClassCar()
{
    this->top_speed = 0;
    std::cout << "ClassSportsCar default constructor called" << std::endl;
}

ClassSportsCar::ClassSportsCar(unsigned int top_speed) : ClassCar()
{
	this->top_speed = top_speed;
	std::cout << "ClassSportsCar constructor called" << std::endl;
}

ClassSportsCar::ClassSportsCar(std::string make, std::string model, unsigned int year, unsigned int top_speed) : ClassCar()
{
    this->make = make;
    this->model = model;
    this->year = year;
    this->top_speed = top_speed;
}


ClassSportsCar::~ClassSportsCar()
{
	std::cout << "ClassSportsCar destructor called" << std::endl;
}

void ClassSportsCar::drive()
{
	std::cout << "Driving " << make << " " << model << " " << year << " edition with speed of " << top_speed << std::endl;
}