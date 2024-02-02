#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = copy;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal Assignation Operator called" << std::endl;
    if(this != &copy)
        this->type = copy.getType();
    return(*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "HEHEHEHHEHEHEHE" << std::endl;
}
