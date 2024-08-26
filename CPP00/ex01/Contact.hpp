/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:30 by etlim             #+#    #+#             */
/*   Updated: 2024/08/26 16:02:00 by etlim            ###   ########.fr       */
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
        string firstName;
        string lastName;
        string nickName;
        string phoneNumber;
        string darkestSecret;

    public :
        void init(void);
        string check_input(string str);
        
    
};