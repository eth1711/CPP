#include <iostream>
using std::string;

class Contact
{
    private:
        string firstName;
        string lastName;
        string nickName;
        string phoneNumber;
        string darkestSecret;

    public :
        string getFirstName();
        string getLastName();
        string getNickName();
        string getPhoneNumber();
        string getDarkestSecret();

        void set_firstName();
        void set_lastName();
        void set_nickName();
        void set_phoneNumber();
        void set_darkestSecret();
    
};