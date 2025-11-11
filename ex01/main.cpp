/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heljary <heljary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:44:02 by heljary           #+#    #+#             */
/*   Updated: 2025/11/11 08:47:12 by heljary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int ac,char **av)
{
    Phonebook Pb;
    std::string str;
    if(ac != 1)
        return 1;
    while(1)
    {
        std::cout << "---------MENU---------" << std::endl;
        std::cout << "----------------------"<< std::endl;
        std::cout << "|        ADD         |"<< std::endl;
        std::cout << "|        SEARCH      |"<< std::endl;
        std::cout << "|        EXIT        |"<< std::endl;
        std::cout << "----------------------"<< std::endl;
        std::cout << "---please enter your choix---"<< std::endl;
        std::cout << "======> ";
        std::cin >> str;
        if(std::cin.eof())
        {
            std::cout << "CTRL + D "<< std::endl;
            Pb.ft_exit();
        }
        if(str == "ADD")
            Pb.add();
        else if(str == "EXIT")
            Pb.ft_exit();
        else if(str == "SEARCH")
        {
            int search = -1;
            std::cout << " index =====> ";
            std::cin >> search;
            while(search < 0)
            {
                std::cout << " please try again this index invalid " << std::endl;
                std::cout << " index =====> ";
            }
            Pb.search(search);
        }
        else
            std::cout << "please try again to another choix like menu !" << std::endl;
    }

    return 0;
}