/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:42:49 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 21:39:20 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor called" << std::endl;
    this->type = "Cat";
    this->_catBrain = new Brain();
}

Cat::~Cat()
{
    delete this->_catBrain;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    this->_catBrain = new Brain(copy.getBrain());
}

const Brain &Cat::getBrain() const
{
    return(*this->_catBrain);
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "Animal Assignation Operator called" << std::endl;
    if(this != &copy)
    {
        this->type = copy.getType();
        delete this->_catBrain;
        this->_catBrain = new Brain(copy.getBrain());
        
    }
    return(*this);
}


void Cat::makeSound() const
{
    std::cout << "Meowwwwwwww" << std::endl;
}
