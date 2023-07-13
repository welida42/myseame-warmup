#ifndef CLASSCAR_HPP
# define CLASSCAR_HPP
# include <iostream>
# include <string>

class ClassCar
{
protected:
	std::string	    make;
	std::string	    model;
	unsigned int    year;

public:
	ClassCar();
	ClassCar(std::string Make, std::string Model, unsigned int Year);
	ClassCar(const ClassCar &old);
	~ClassCar();
	ClassCar &operator=(const ClassCar &operand);

    std::string	    get_make() {return make;}
	std::string	    get_model() {return model;}
    unsigned int    get_year() {return year;}
	void	    	set_make(std::string _make) {make = _make;}
	void	    	set_model(std::string _model) {model = _model;}
    void    		set_year(unsigned int _year) {year = _year;}
	void    		drive();
};
#endif