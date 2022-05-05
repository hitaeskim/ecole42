#include "HumanA.hpp"

HumanA::~HumanA(){}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){}

void HumanA::attack(void){
    std::cout << _name << " attack with their " << _weapon.getType() << std::endl;   
}