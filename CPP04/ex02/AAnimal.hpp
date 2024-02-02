/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:43:46 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 22:07:46 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal &copy);
        AAnimal &operator=(const AAnimal &copy);
        virtual ~AAnimal();

        virtual std::string getType() const;
        virtual void makeSound() const = 0; //pure virtual function to complete ex02

};

#endif
