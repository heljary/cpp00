#include "phonebook.hpp"

int Phonebook::index = 0;
int Phonebook::contactCount = 0;
Phonebook::Phonebook(){};
void Phonebook::add()
{
    std::cout << "please add Contact" << std::endl;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    std::cout << "please enter your first name :\n" << "first name => ";
    std::cin >> first_name;
    std::cout << "please enter your last name :\n" << "last name => ";
    std::cin >> last_name;
    std::cout << "please enter your nickname :\n" << "nick name => ";
    std::cin >> nickname;
    std::cout << "please enter your phone number :\n" << "phone number => ";
    std::cin >> phone_number;
    std::cout << "please enter your dark secret :\n" << "darkest secret => ";
    std::cin >> darkest_secret;
    contacts[index].setData(first_name,last_name,nickname,phone_number,darkest_secret);
    index = (index + 1) % MAX_CONTS;
    if (contactCount < MAX_CONTS)
        contactCount++;
    std::cout << "index is : " << index << std::endl;
};

void Phonebook::search(int i)
{
    if(i < 0 || i >= MAX_CONTS)
    {
        std::cout << "Invalid index! Please enter an index between 0 and " << (MAX_CONTS - 1) << std::endl;
        return;
    }
    if (i >= contactCount)
    {
        std::cout << "No contact at index " << i << "! Only " << contactCount 
                  << " contact(s) have been added." << std::endl;
        return;
    }
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "|" << std::setw(10) << "Index"
        << "|" << std::setw(10) << "First Name"
        << "|" << std::setw(10) << "Last Name"
        << "|" << std::setw(10) << "Nickname"
        << "|" << std::setw(10) << "Phone"
        << "|" << std::setw(10) << "Secret" << "|\n";
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "|" << std::setw(10) << i;
    contacts[i].getData();
    std::cout << "|" << std::endl;
    std::cout << "-------------------------------------------------------------------\n";
};

void Phonebook::ft_exit()
{
    exit(1);
};

Phonebook::~Phonebook(){};