#define PHONEBOOK_H
#ifdef PHONEBOOK_H
#include <iostream>
#include <iomanip>


class Contact
{
private:
   std::string first_name;
   std::string last_name;
   std::string nickname;
   std::string phone_number;
   std::string darkest_secret;
public:
    void setData(std::string fn,std::string ln,std::string nckn,std::string pn,std::string ds);
    void getData();
    Contact();
    ~Contact();
};


class Phonebook
{
private:
    Contact contacts[8];
    static int index;
public:
    void add();
    void Display();
    Phonebook();
    ~Phonebook();
};

#endif