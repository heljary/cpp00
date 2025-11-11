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
    if (!std::getline(std::cin, first_name)) {
        std::cin.clear();
        exit(1);
    }
    std::cout << "please enter your last name : " << std::endl;
    if (!std::getline(std::cin, last_name)) {
        std::cin.clear();
        exit(1);
    }
    std::cout << "please enter your nickname : " << std::endl;
    if (!std::getline(std::cin, nickname)) {
        std::cin.clear();
        exit(1);
    }
    std::cout << "please enter your phone number : " << std::endl;
    if (!std::getline(std::cin, phone_number)) {
        std::cin.clear();
        exit(1);
    }
    std::cout << "please enter your dark secret : " << std::endl;
    if (!std::getline(std::cin, darkest_secret)) {
        std::cin.clear();
        exit(1);
    }
    if (first_name.empty() || last_name.empty() || nickname.empty() ||
    phone_number.empty() || darkest_secret.empty()) {
        std::cout << "Error: one or more fields are empty. Contact not added.\n";
        return;
    }
    contacts[index].setData(first_name,last_name,nickname,phone_number,darkest_secret);
    std::cout << "Contact added successfully!\n";
    index = (index + 1) % MAX_CONTS;
    if (contactCount < MAX_CONTS)
        contactCount++;
};

void Phonebook::search()
{
    int i;
    std::cin >> i;
    if(std::cin.fail())
    {
        exit(1);
    }
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
    std::cout << "|" << std::left << std::setw(10) << i;
    contacts[i].getData();
    std::cout << "|" << std::endl;
    std::cout << "-------------------------------------------------------------------\n";
};

Phonebook::~Phonebook(){};