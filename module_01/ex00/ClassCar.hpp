#ifndef CLASSCAR_HPP
# define CLASSCAR_HPP
# include <iostream>
# include <string>

class ClassCar
{
private:
	std::string	    name;
	unsigned int    speed;

public:
	
	ClassCar(std::string Name, unsigned int Speed);
	ClassCar(const ClassCar &old);
	~ClassCar();
	ClassCar &operator=(const ClassCar &operand);

    std::string	    get_name() {return name;}
    unsigned int    get_speed() {return speed;}
};
#endif