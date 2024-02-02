#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = copy;
}

std::string WrongCat::getType() const
{
    return(this->type);
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    std::cout << "Animal Assignation Operator called" << std::endl;
    if(this != &copy)
        this->type = copy.getType();
    return(*this);
}


void WrongCat::makeSound() const
{
    std::cout << "ROARRRRRRRR" << std::endl;
}
