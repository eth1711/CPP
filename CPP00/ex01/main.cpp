/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:07:49 by etlim             #+#    #+#             */
/*   Updated: 2024/11/07 22:12:55 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
using std::cout;
using std::cin;
using std::string;

//things for talking during eval
//1. why im using \n instead of endl
//2. why im using "using std::" instead of
//putting it in my code
int main(void)
{
    PhoneBook	phonebook;
	string		input;
    
	system("clear");
	cout << "\nWelcome to this Awesome Phonebook!\n\n"
    << "Type in your option of choice\n";
	
	while (1)
	{
		cout << "\n------------SELECT OPTION------------\n\n"
		<< "ADD : Create a contact\n"
		<< "SEARCH : Search for a contact\n"
		<< "EXIT : Throws phonebook away\n\n";
   		cout << ">";
		getline(cin, input);
		if (!input.compare("ADD") )
			phonebook.addContact();
		// else if (!input.compare("SEARCH"))
		// 	phonebook.searchContact();
		else if (!input.compare("EXIT"))
		{	
			cout << "GOODBYE\n";
			break ;
		}
		else
			cout << "!!Invalid Command!!" << "\n\n";
	}
	return(0);
}
