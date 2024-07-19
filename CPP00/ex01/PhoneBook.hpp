#include <iostream>
#include <iomanip>
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
