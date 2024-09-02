#include <iostream>
#include <string>

struct User{
    std::string firstName;
    std::string lastName;
    std::string address;
    std::string phoneNumber;
};

//void means the function doesn't return anything;
void printUser(User pUser);

int main() {

    User curUser;
    
    std::cout << "Enter your first name: ";
    std::cin >> curUser.firstName;
    
    std::cout << "Enter your last name: ";
    std::cin >>  curUser.lastName;

    //These two lines will throw away the '\n' left in the buffer
    std::string temp;
    getline(std::cin, temp);

    std::cout << "Enter your address: ";
    getline(std::cin, curUser.address);

    std::cout << "Enter your phone number: ";
    getline(std::cin, curUser.phoneNumber);

    std::cout << '\n';
    printUser(curUser);
}

void printUser(User pUser){
    std::cout << "Name: " << pUser.firstName << " " << pUser.lastName << '\n';
    std::cout << "Address: " << pUser.address << '\n';
    std::cout << "Phone Number: " << pUser.phoneNumber << '\n';
}
