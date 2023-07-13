#ifndef CLASSCAR_HPP
# define CLASSCAR_HPP
# include <iostream>
# include <string>
# include <memory>

class Part {
public:
    virtual void print() = 0; // Pure virtual function to be overridden by derived classes
};


class Engine : public Part {
public:
    void print() override {
        std::cout << "Gasoline Engine with a capacity of 100 KWT\n";
    }
};

class Wheel : public Part {
// private:
//     std::string material_;
//     int size_;
public:
	Wheel() {}
    void print() override {
        std::cout << "steel Wheels with 15 inches size\n";
    }
};

class Brake : public Part {
public:
    void print() override {
        std::cout << "Brakes with wear in 0%\n";
    }
};

class Transmission : public Part {
public:
    void print() override {
        std::cout << "5-speed manual Transmission\n";
    }
};




class ClassCar
{
protected:
	std::string	    make;
	std::string	    model;
	unsigned int    year;

	std::shared_ptr<Engine> engine_;
    std::shared_ptr<Wheel> 	wheels_[4];
    std::shared_ptr<Brake> brakes_[4];
    std::shared_ptr<Transmission> transmission_;

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
	void    		print();
	void			printParts();
};
#endif