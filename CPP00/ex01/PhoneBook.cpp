/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:45 by etlim             #+#    #+#             */
/*   Updated: 2024/11/09 02:49:57 by etlim            ###   ########.fr       */
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
	while (str.empty())
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
	if(this->_nb_contacts < 8)
		_nb_contacts++;
}

void PhoneBook::searchContact(){
	int		i = 0;
	int		num;
	string	fname;
	string	lname;
	string	nname;
	string	phone;
	string	secret;
	string	input;	
	
	system("clear");
    if(this->_contact[0].get_firstName().empty()){
		cout << "Contact List Empty!" << "\n";
		return ;
	}
	cout << "|" << setw(10) << "Index" << "|"
	<< setw(10) << "First Name" << "|"
	<< setw(10) << "Last Name" << "|"
	<< setw(10) << "Nickname" << "|\n"
	<< "---------------------------------------------\n";
	for (i = 0; i < 8 && !this->_contact[i].get_firstName().empty(); i++){
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
		cout << "|" << setw(10) << i << "|"
		<< setw(10) << fname << "|"
		<< setw(10) << lname << "|"
		<< setw(10) << nname << "|\n";
	}
	cout << "\nType the index of a contact you would like to see: ";
	getline(cin, input);
	num = atoi(input.c_str());
	while (((input.empty()) || (num == 0 && input[0] != '0') || 
		(num < 0 || num > 7)) || (num >= this->_nb_contacts))
	{
		cout << "Invalid input! Please enter a valid index!\n"
		<< ">>";
		getline(cin, input);
		num = atoi(input.c_str());
	}
	system("clear");
	cout << "-Contact " << num << " on the list-\n\n"
	<< "First Name: " << this->_contact[num].get_firstName() << "\n"
	<< "Last Name: " << this->_contact[num].get_lastName() << "\n"
	<< "Nickname: " << this->_contact[num].get_nickName() << "\n"
	<< "Phone Number: " << this->_contact[num].get_phoneNumber() << "\n"
	<< "Darkest Secret: " << this->_contact[num].get_darkestSecret() << "\n";
}