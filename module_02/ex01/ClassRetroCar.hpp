#ifndef ClassRetroCar_HPP
# define ClassRetroCar_HPP
# include <iostream>
# include <string>
# include "ClassCar.hpp"

class ClassRetroCar : public ClassCar
{
private:
    unsigned int top_speed; 

public:
    ClassRetroCar();
	ClassRetroCar(unsigned int top_speed);
    ClassRetroCar(std::string make, std::string model, unsigned int year, unsigned int top_speed);
	~ClassRetroCar();

	void drive();
    void set_top_speed(unsigned int _top_speed) {top_speed = _top_speed;}
};

#endif