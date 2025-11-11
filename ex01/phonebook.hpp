/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heljary <heljary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:47:20 by heljary           #+#    #+#             */
/*   Updated: 2025/11/11 08:47:21 by heljary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PHONEBOOK_H
#ifdef PHONEBOOK_H
#define MAX_CONTS 8
#include "Contact.hpp"

class Phonebook
{
private:
    Contact contacts[8];
    static int index;
    static int contactCount;
public:
    void add();
    void search();
    Phonebook();
    ~Phonebook();
};

#endif