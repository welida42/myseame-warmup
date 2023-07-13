#include "ClassCar.hpp"
#include "ClassSportsCar.hpp"
#include "ClassRetroCar.hpp"



int main( void )
{

//    ClassSportsCar Lada;
//    Lada.drive();

//    ClassSportsCar Ferrari(500);
//    Ferrari.drive();

    ClassSportsCar  *Porsche = new ClassSportsCar("Porsche", "911", 1990, 300);
    Porsche->printParts();
    
    ClassRetroCar   *RolseRoys = new ClassRetroCar("RolseRoys", "Qween", 1930, 50);
    RolseRoys->printParts();

    delete Porsche;
    delete RolseRoys;

    std::unique_ptr<ClassSportsCar> Ferari = std::make_unique<ClassSportsCar>("Ferari", "F1", 2023, 400);
    Ferari->printParts();
    Ferari->drive();


//    Porsche->print();

 
	return 0;
}