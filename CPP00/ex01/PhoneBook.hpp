#include <iostream>
using std::string;

class PhoneBook
{
    private:
        string  Contact[8];

    public:
        PhoneBook();//Constructor
        ~PhoneBook();//Destructor
        void    addContact();
        void    searchContact();
};