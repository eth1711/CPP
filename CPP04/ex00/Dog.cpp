/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:42:54 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 19:42:55 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = copy;
}

std::string Dog::getType() const
{
    return(this->type);
}

Dog& Dog::operator=(const Dog& copy)
{
    std::cout << "Dog Assignation Operator called" << std::endl;
    if(this != &copy)
        this->type = copy.getType();
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Woooofffff" << std::endl;
}
