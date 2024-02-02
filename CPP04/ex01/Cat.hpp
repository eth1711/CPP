/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:43:54 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 21:03:20 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_catBrain;

    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat();
        
        const Brain &getBrain() const;
        void makeSound() const;
};

#endif
