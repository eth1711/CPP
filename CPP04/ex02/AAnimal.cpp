/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:42:44 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 21:38:50 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal Constructor called" << std::endl;
    this->type = "AAnimal";
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "AAnimal Copy Constructor called" << std::endl;
    *this = copy;
}

std::string AAnimal::getType() const
{
    return(this->type);
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
    std::cout << "AAnimal Assignation Operator called" << std::endl;
    if(this != &copy)
        this->type = copy.getType();
    return(*this);
}

void AAnimal::makeSound() const
{
    std::cout << "Random AAnimal Sound wushwsuhwsuh" << std::endl;
}
