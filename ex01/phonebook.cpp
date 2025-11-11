/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heljary <heljary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:47:16 by heljary           #+#    #+#             */
/*   Updated: 2025/11/11 08:47:17 by heljary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "please enter your first name : " << std::endl;
    std::cin.ignore();
    getline(std::cin,first_name);
    std::cout << "please enter your last name : " << std::endl;
    getline(std::cin,last_name);
    std::cout << "please enter your nickname : " << std::endl;
    getline(std::cin,nickname);
    std::cout << "please enter your phone number : " << std::endl;
    getline(std::cin,phone_number);
    std::cout << "please enter your dark secret : " << std::endl;
    getline(std::cin,darkest_secret);
    contacts[index].setData(first_name,last_name,nickname,phone_number,darkest_secret);
    index = (index + 1) % MAX_CONTS;
    if (contactCount < MAX_CONTS)
        contactCount++;
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