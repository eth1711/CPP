#include <iostream> 
using std::cout;
using std::cin;
using std::endl; 
using std::string;

// driver code 
int main() 
{ 
    string firstName;

    cout << "Type in your firstname: ";
    cin >> firstName;
    if (firstName[0] == 'E')
        cout << "Your name is: " << firstName << endl;
    cout << "YOUR NAME DOES NOT START WITH E" << endl;

    return 0; 
}