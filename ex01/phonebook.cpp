#include "phonebook.hpp"


void Contact::setData(std::string fn,std::string ln,std::string nckn,std::string pn,std::string ds){
    first_name = fn;
    last_name = ln;
    nickname = nckn;
    phone_number = pn;
    darkest_secret = ds;
};

void Phonebook::add()
{
    std::cout << "please enter your Contact" << std::endl;
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
    contacts[0].setData(first_name,last_name,nickname,phone_number,darkest_secret);
};

void Contact::getData()
{
    std::cout << std::setw(10) << first_name ;
}

void Phonebook::Display()
{
    std::cout << "---------------------------------------------\n";
    std::cout << "| Index | First Name | Last Name | Nickname |\n";
    std::cout << "---------------------------------------------\n";
    contacts[0].getData();
    std::cout << std::endl;
}

Phonebook::Phonebook(){};
Phonebook::~Phonebook(){};

Contact::Contact(){};
Contact::~Contact(){};


int main(int ac, char **av)
{
    // if(!(ac == 2))
    //     return 1;
    Phonebook Pb;
    // if(av[1] == "ADD")
    // {
        Pb.add();
    // }

    Pb.Display();
}