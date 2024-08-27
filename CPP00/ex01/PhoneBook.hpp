/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:23 by etlim             #+#    #+#             */
/*   Updated: 2024/08/27 19:00:14 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
using std::string;
using std::setw;

class PhoneBook
{
    private:
        int     _index;
        Contact _contact[8];

    public:
        PhoneBook();//Constructor
        ~PhoneBook();//Destructor
        void    welcome();
        void    addContact();
        string  searchContact();
};
