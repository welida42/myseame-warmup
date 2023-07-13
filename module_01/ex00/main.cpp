#include "ClassCar.hpp"


int main( void )
{


    ClassCar Kia("KIA", 100);

    ClassCar B(Kia);

    std::cout << "name = " << B.get_name() << " speed = " << B.get_speed() << std::endl;

    ClassCar Vw("VW", 200);

    Vw = Kia;

    std::cout << "name = " << Vw.get_name() << " speed = " << Vw.get_speed() << std::endl;

	return 0;
    
}