#include "ClassRetroCar.hpp"
#include "ClassCar.hpp"


ClassRetroCar::ClassRetroCar() : ClassCar()
{
    this->top_speed = 0;
}

ClassRetroCar::ClassRetroCar(unsigned int top_speed) : ClassCar()
{
	this->top_speed = top_speed;
	std::cout << "ClassRetroCar constructor called" << std::endl;
}

ClassRetroCar::ClassRetroCar(std::string make, std::string model, unsigned int year, unsigned int top_speed) : ClassCar()
{
    this->make = make;
    this->model = model;
    this->year = year;
    this->top_speed = top_speed;

}


ClassRetroCar::~ClassRetroCar()
{
	std::cout << "ClassRetroCar destructor called" << std::endl;
}

void ClassRetroCar::drive()
{
	std::cout << "Showing RetroCar " << make << " " << model << " " << year << " edition with speed of " << top_speed << std::endl;
}