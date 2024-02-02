/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:01:53 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 20:41:22 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = "Ideas";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain Copy Constructor Called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
    std::cout << "Brain Assignation Operator called" << std::endl;
    if(this != &copy)
        for(int i = 0; i < 100; i++)
            this->_ideas[i] = copy._ideas[i];
    return(*this);
}

const std::string *Brain::getIdeas(void) const
{
   return(this->_ideas);
}

void Brain::setIdeas() const
{
    for(int i = 0; i < 100; i++)
        std::cout << this->_ideas[i] << std::endl;
}
