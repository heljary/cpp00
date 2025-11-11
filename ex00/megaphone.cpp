/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heljary <heljary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:48:03 by heljary           #+#    #+#             */
/*   Updated: 2025/11/11 08:48:04 by heljary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char *av[])
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(int j = 0; av[i][j] ; j++)
            {
                std::cout << toupper(av[i][j]);
            }
        }
        std:: cout << std::endl;
    }

    return 0;
}