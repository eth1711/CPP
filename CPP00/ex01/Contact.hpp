/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:30 by etlim             #+#    #+#             */
/*   Updated: 2024/08/27 16:30:36 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
using std::string;
using std::cout;
using std::cin;
class Contact
{
    private:
        string  _firstName;
        string  _lastName;
        string  _nickName;
        string  _phoneNumber;
        string  _darkestSecret;

    public :
        void init();
        string check_input(string str);
        
};