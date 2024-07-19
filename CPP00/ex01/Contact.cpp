#include "Contact.hpp"

void Contact::set_firstName(string f_name){
    this->firstName = f_name;
}

void Contact::set_lastName(string l_name){
    this->lastName = l_name;
}

void Contact::set_nickName(string n_name){
    this->nickName = n_name;

}

void Contact::set_phoneNumber(string number){
    this->phoneNumber = number;
}

void Contact::set_darkestSecret(string secret){
    this->darkestSecret = secret;
}

string Contact::get_firstName(){
    return this->firstName;
}

string Contact::get_lastName(){
    return this->lastName;
}

string Contact::get_nickName(){
    return this->nickName;
}

string Contact::get_phoneNumber(){
    return this->phoneNumber;
}

string Contact::get_darkestSecret(){
    return this->darkestSecret;
}
