/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:40 by etlim             #+#    #+#             */
/*   Updated: 2024/08/27 16:23:47 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::init(){
    this->_firstName = this->check_input("Enter their first name -> ");
    this->_lastName = this->check_input("Enter their last name -> ");
    this->_nickName = this->check_input("Enter their nickname -> ");
    this->_phoneNumber = this->check_input("Enter their phone number -> ");
    this->_darkestSecret = this->check_input("Enter their darkest secret -> ");
    cout << "-----Contact has been created!-----\n";
}

string Contact::check_input(string str){
    string input;

    cout << str;
    getline(cin, input);
    while (input.empty()){
        cout << "Input empty. Try Again" << "\n";
        cout << "->";
        getline(cin, input);
    }
    return (input);
}