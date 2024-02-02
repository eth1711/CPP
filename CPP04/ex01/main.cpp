/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:42:30 by etlim             #+#    #+#             */
/*   Updated: 2024/02/02 22:03:50 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    
    //testcase with WrongAnimal and WrongCat
    // const WrongAnimal* meta = new WrongAnimal();
    // const Animal* j = new Dog();
    // const WrongAnimal* i = new WrongCat();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    const Animal* j = new Dog();
    const Animal* i = new Cat();

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

    //Array of animals
    const Animal *animals[4];

    for (int i = 0; i < 2; i++)
	    animals[i] = new Dog();

    for (int i = 2; i < 4; i++)
	    animals[i] = new Cat();

    for (int i = 0; i < 4; i++)
	    delete animals[i];

    system("leaks polymorphism");

    return 0;
}
