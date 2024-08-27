/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:07:49 by etlim             #+#    #+#             */
/*   Updated: 2024/08/27 18:59:48 by etlim            ###   ########.fr       */
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
    PhoneBook   phonebook;
    string      input;
    
    phonebook.welcome();
    getline(cin, input);
    while (input != "EXIT")
    {
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
            phonebook.searchContact();
        else
            cout << "NO SUCH OPTION!" << "\n";
        cout << "->";
        getline(cin, input);
    }
    return (0);
}
