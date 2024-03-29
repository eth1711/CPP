/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:42:49 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 20:11:03 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = copy;
}

std::string Cat::getType() const
{
    return(this->type);
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "Cat Assignation Operator called" << std::endl;
    if(this != &copy)
        this->type = copy.getType();
    return(*this);
}


void Cat::makeSound() const
{
    std::cout << "Meowwwwwwww" << std::endl;
}
