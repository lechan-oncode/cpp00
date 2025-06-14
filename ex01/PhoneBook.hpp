/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechan <lechan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:26:24 by lechan            #+#    #+#             */
/*   Updated: 2025/06/14 16:26:25 by lechan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <stdio.h>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _idx;
        int _max;
    public:
        PhoneBook();
        ~PhoneBook();

        void add();
        void search();
        void tableHeader();
};

#endif