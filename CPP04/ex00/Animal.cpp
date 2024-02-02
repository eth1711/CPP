#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = copy;
}

std::string Animal::getType() const
{
    return(this->type);
}

Animal& Animal::operator=(const Animal& copy)
{
    std::cout << "Animal Assignation Operator called" << std::endl;
    if(this != &copy)
        this->type = copy.getType();
    return(*this);
}

void Animal::makeSound() const
{
    std::cout << "Random Animal Sound wushwsuhwsuh" << std::endl;
}
