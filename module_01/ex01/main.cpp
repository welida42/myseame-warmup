#include "ClassCar.hpp"
#include "ClassSportsCar.hpp"

int main( void )
{


    ClassCar Kia("KIA", "RIO", 2020);
    Kia.drive();

    ClassSportsCar VW(300);
    VW.drive();
    std::cout << VW.get_make() << "\n";
    VW.set_make("VW");
    VW.set_model("POLO");
    VW.set_year(2013);
    VW.drive();

    ClassSportsCar Lada;
    Lada.drive();

    ClassSportsCar Ferrari(500);
    Ferrari.drive();

    ClassSportsCar Porsche("Porsche", "911", 1990, 777);
    Porsche.drive();
 
	return 0;
    
}