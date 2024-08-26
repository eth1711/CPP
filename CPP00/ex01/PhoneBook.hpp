/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:23 by etlim             #+#    #+#             */
/*   Updated: 2024/08/26 13:38:32 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
using std::string;
using std::setw;

class PhoneBook
{
    private:
        Contact _contact[8];

    public:
        PhoneBook();//Constructor
        ~PhoneBook();//Destructor
        void    welcome();
        void    addContact();
        string  searchContact();
};
