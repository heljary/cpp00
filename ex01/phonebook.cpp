#include <iostream>



class PhoneBook{
    public:
    std::string contact[8][6];

};

class Contact{
    public:
    std::string first_tname;
    std::string last_name;
    std::string nick_name;
    int phone_number;
    int darkest_scret;
    int index;
    PhoneBook add(std::string f_name, std::string l_name, std::string n_name, int p_number,int d_scret);
    void search();
    private:
    
};

PhoneBook Contact::add(std::string f_name, std::string l_name, std::string n_name, int p_number,int d_scret){
    this->index+=1;
    this->first_tname = f_name;
    this->last_name = l_name;
    this->nick_name = n_name;
    this->phone_number = p_number;
    this->darkest_scret = d_scret;

    return ()
}


int main(int ac, char **av){

}