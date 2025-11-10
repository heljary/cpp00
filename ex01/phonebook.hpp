#define PHONEBOOK_H
#ifdef PHONEBOOK_H
#define MAX_CONTS 2
#include "Contact.hpp"

class Phonebook
{
private:
    Contact contacts[8];
    static int index;
    static int contactCount;
public:
    void add();
    void search(int i);
    void ft_exit();
    Phonebook();
    ~Phonebook();
};

#endif