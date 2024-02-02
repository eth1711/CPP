/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:43:46 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 19:43:47 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();

        virtual std::string getType() const;
        virtual void makeSound() const;
};

#endif
