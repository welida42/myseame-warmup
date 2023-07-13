#include "ClassCar.hpp"
#include "ClassSportsCar.hpp"
#include "ClassRetroCar.hpp"
#include "memory"

int main(void)
{

//    ClassSportsCar Lada;
//    Lada.drive();

//    ClassSportsCar Ferrari(500);
//    Ferrari.drive();

//    ClassSportsCar  *Porsche = new ClassSportsCar("Porsche", "911", 1990, 777);
//    Porsche->drive();

//    ClassRetroCar   *RolseRoys = new ClassRetroCar("RolseRoys", "Qween", 1930, 50);
//    RolseRoys->drive();

//    delete Porsche;


    std::unique_ptr<ClassSportsCar> Ferari = std::make_unique<ClassSportsCar>("Ferari", "F1", 2023, 400);
    Ferari->drive();

//    std::unique_ptr<ClassSportsCar> F2 = Ferari;


    std::shared_ptr<ClassSportsCar> Porsche = std::make_shared<ClassSportsCar>("Porsche", "911", 1990, 411);
    Porsche->drive();
    
    std::shared_ptr<ClassSportsCar> P2 = Porsche;
    P2->drive();
	return 0;
}