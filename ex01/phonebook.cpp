#include "phonebook.hpp"

int Phonebook::index = 0;

void Contact::setData(std::string fn,std::string ln,std::string nckn,std::string pn,std::string ds){
    first_name = fn;
    last_name = ln;
    nickname = nckn;
    phone_number = pn;
    darkest_secret = ds;
};

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
    index++;
    contacts[index % 8].setData(first_name,last_name,nickname,phone_number,darkest_secret);
};


std::string rmp_point(std::string str)
{
    if(str.empty())
        return "";
    if(str.length() > 10)
        return str.substr(0, 9) + '.';
    else
        return str;
}

void Contact::getData()
{
    std::cout << "|" << std::setw(10) << rmp_point(first_name);
    std::cout << "|" << std::setw(10) << rmp_point(last_name);
    std::cout << "|" << std::setw(10) << rmp_point(nickname);
    std::cout << "|" << std::setw(10) << rmp_point(phone_number);
    std::cout << "|" << std::setw(10) << rmp_point(darkest_secret);

}
void Phonebook::search(int i)
{
    if(i > index)
    {
        std::cout << "this contact invalid please try again to another index !" << std::endl;
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

Phonebook::Phonebook(){};
Phonebook::~Phonebook(){};

Contact::Contact(){};
Contact::~Contact(){};