/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:40 by etlim             #+#    #+#             */
/*   Updated: 2024/08/26 16:57:33 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::init(){
    this->firstName = this->check_input("Enter their first name : ");
    this->lastName = this->check_input("Enter their last name : ");
    this->nickName = this->check_input("Enter their nickname : ");
    this->phoneNumber = this->check_input("Enter their phone number : ");
    this->darkestSecret = this->check_input("Enter their darkest secret : ");
    cout << "\n";
}

string Contact::check_input(string str){
    string input;

    cout << str << "\n";
    cout << ">";
    getline(cin, input);
    while (input.empty()){
        cout << "Input empty. Try Again" << "\n";
        cout << '>';
        getline(cin, input);
    }
    while 
    return (input);
}