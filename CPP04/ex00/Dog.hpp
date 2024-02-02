/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:43:58 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 19:43:59 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
    protected:
        std::string type;

    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        ~Dog();

        std::string getType() const;
        void makeSound() const;
};

#endif
