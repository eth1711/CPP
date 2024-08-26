/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:45 by etlim             #+#    #+#             */
/*   Updated: 2024/08/26 14:16:07 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){      
}

void PhoneBook::welcome(){
    cout << "\nWelcome to this Awesome Phonebook!\n\n"
    << "Type in your option of choice\n\n"
    << "------------SELECT OPTION------------\n\n"
    << "ADD : Create a contact\n"
    << "SEARCH : Search for a contact\n"
    << "EXIT : Throws phonebook away\n\n";
    // << "-------------------------------------\n";
    cout << ">";
}

void PhoneBook::addContact(){
    static int i;
    this->_contact[i % 8]
}


string PhoneBook::searchContact(){
    
}

