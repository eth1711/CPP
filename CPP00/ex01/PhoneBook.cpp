/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:45 by etlim             #+#    #+#             */
/*   Updated: 2024/10/31 14:39:45 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->_index = 0;
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
    this->_contact[_index].init();
    cout << this->_index << "\n";
    this->_index = (_index + 1) % 8;
}

string PhoneBook::searchContact(){
    return ("hello\n");
}

void input_check()