/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:45 by etlim             #+#    #+#             */
/*   Updated: 2024/11/07 22:43:25 by etlim            ###   ########.fr       */
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
	
	cout << "Enter your " << input << ": ";
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
	system("clear");
    Contact *contact = &this->_contact[this->_index];
    contact->set_firstName(input_check("first name"));
    contact->set_lastName(input_check("last name"));
    contact->set_nickName(input_check("nickname"));
    contact->set_darkestSecret(input_check("darkest secret"));
    contact->set_phoneNumber(input_check("phone number"));
	cout << "\n* Contact has been added *" << "\n\n";
    this->_index = (_index + 1) % 8;
}

void PhoneBook::searchContact(){
	int		i = 0;
	string	fname;
	string	lname;
	string	nname;
	string	phone;
	string	secret;
	string	input;	
	
	system("clear");
    if(this->_index == 0){
		cout << "Contact List Empty!" << "\n";
		return ;
	}
	cout << setw(10) << "Index" << "|"
	<< setw(10) << "First Name" << "|"
	<< setw(10) << "Last Name" << "|"
	<< setw(10) << "Nick Name" << "\n";
	while (i < 8) {
		fname = this->_contact[i].get_firstName();
		lname = this->_contact[i].get_lastName();
		nname = this->_contact[i].get_nickName();
		phone = this->_contact[i].get_phoneNumber();
		secret = this->_contact[i].get_darkestSecret();
		if (fname.length() > 9)
			fname = fname.substr(0, 9) + ".";
		if (lname.length() > 9)
			lname = lname.substr(0, 9) + ".";
		if (nname.length() > 9)
			nname = nname.substr(0, 9) + ".";
		cout << setw(10) << i << "|"
		<< setw(10) << fname << "|"
		<< setw(10) << lname << "|"
		<< setw(10) << nname << "\n";
		i++;
	}
}