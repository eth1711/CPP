/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:45 by etlim             #+#    #+#             */
/*   Updated: 2024/11/05 13:51:19 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->_index = 0;
}

PhoneBook::~PhoneBook(){      
}

string  input_check(string input)
{
	string str;
	
	cout << "Enter your" << input << ": ";
	getline(cin, str);
	if (str.empty())
	{
		cout << "Nothing inputed!" << "\n";
		cout << ">>";
		getline(cin, str);
	}
	return (str);
}

void PhoneBook::addContact(){
    Contact *contact = &this->_contact[this->_index];
    contact->set_firstName(input_check("first name"));
    contact->set_lastName(input_check("last name"));
    contact->set_nickName(input_check("nickname"));
    contact->set_darkestSecret(input_check("darkest secret"));
    contact->set_phoneNumber(input_check("phone number"));
	cout << "Contact has been added" << "\n";
    this->_index = (_index + 1) % 8;
}

string PhoneBook::searchContact(){
    return ("hello\n");
}