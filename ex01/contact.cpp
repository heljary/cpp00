#include "Contact.hpp"

Contact::Contact(){};

std::string rmp_point(std::string str)
{
    if(str.empty())
        return "";
    if(str.length() > 10)
        return str.substr(0, 9) + '.';
    else
        return str;
}

void Contact::setData(std::string fn,std::string ln,std::string nckn,std::string pn,std::string ds){
    first_name = fn;
    last_name = ln;
    nickname = nckn;
    phone_number = pn;
    darkest_secret = ds;
};

void Contact::getData()
{
    std::cout << "|" << std::setw(10) << rmp_point(first_name);
    std::cout << "|" << std::setw(10) << rmp_point(last_name);
    std::cout << "|" << std::setw(10) << rmp_point(nickname);
    std::cout << "|" << std::setw(10) << rmp_point(phone_number);
    std::cout << "|" << std::setw(10) << rmp_point(darkest_secret);
    
}
Contact::~Contact(){};