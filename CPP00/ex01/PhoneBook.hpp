/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:23 by etlim             #+#    #+#             */
/*   Updated: 2024/11/09 02:43:49 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
using std::string;
using std::setw;

class PhoneBook{
    private:
        int     _index;
		int		_nb_contacts;
        Contact _contact[8];

    public:
        PhoneBook();//Constructor
        ~PhoneBook();//Destructor
        void	addContact();
        void	searchContact();
};
