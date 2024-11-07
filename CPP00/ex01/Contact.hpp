/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:30 by etlim             #+#    #+#             */
/*   Updated: 2024/11/07 22:15:23 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using std::string;
using std::cout;
using std::cin;
using std::setw;
class Contact
{
    private:
        string firstName;
        string lastName;
        string nickName;
        string phoneNumber;
        string darkestSecret;

    public :
        string get_firstName();
        string get_lastName();
        string get_nickName();
        string get_phoneNumber();
        string get_darkestSecret();
        void set_firstName(string f_name);
        void set_lastName(string l_name);
        void set_nickName(string n_name);
        void set_phoneNumber(string number);
        void set_darkestSecret(string secret);
    
};