#ifndef ClassSportsCar_HPP
# define ClassSportsCar_HPP
# include <iostream>
# include <string>
# include "ClassCar.hpp"

class ClassSportsCar : public ClassCar
{
private:
    unsigned int top_speed; 

public:
    ClassSportsCar();
	ClassSportsCar(unsigned int top_speed);
    ClassSportsCar(std::string make, std::string model, unsigned int year, unsigned int top_speed);
	~ClassSportsCar();

	void drive();
    void set_top_speed(unsigned int _top_speed) {top_speed = _top_speed;}
};

#endif