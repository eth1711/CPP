/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:43:58 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 21:39:02 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *_dogBrain;

    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        ~Dog();

        const Brain &getBrain() const;
        void makeSound() const;
};

#endif
