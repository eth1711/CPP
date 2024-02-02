/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:42:30 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 21:41:15 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    //Deep copy proof! Each dog has their own allocated Brain with same contents
    const Dog *f = new Dog();
    const Dog *g = new Dog(*f);

    std::cout << "----f Brain----\n";
    // f->getBrain().printBrain();
    std::cout << &f->getBrain() << '\n';
    std::cout << "----g Brain----\n";
    // g->getBrain().printBrain();
    std::cout << &g->getBrain() << '\n';

    delete f;
    delete g;

    // system("leaks polymorphism");

    //Array of AAnimals
    const AAnimal *AAnimals[4];

    for (int i = 0; i < 2; i++)
    AAnimals[i] = new Dog();

    for (int i = 2; i < 4; i++)
    AAnimals[i] = new Cat();

    for (int i = 0; i < 4; i++)
    delete AAnimals[i];

    // system("leaks polymorphism");

    return 0;
}
