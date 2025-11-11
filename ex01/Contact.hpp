/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heljary <heljary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:47:08 by heljary           #+#    #+#             */
/*   Updated: 2025/11/11 08:47:09 by heljary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CONTACT_H
#ifdef CONTACT_H
#include <iostream>
#include <iomanip>
#include <cstring>

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

#endif