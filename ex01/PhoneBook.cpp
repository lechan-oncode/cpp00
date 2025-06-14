/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechan <lechan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:26:16 by lechan            #+#    #+#             */
/*   Updated: 2025/06/14 17:43:07 by lechan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    _idx = 0;
    _max = 8;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add()
{
    if (_idx >= _max)
        std::cout <<  "Prewriting oldest contact" << std::endl;
    this->_contacts[_idx % _max].setContact();
    std::cout << "ADDED to contact INDEX [" << _idx % _max  << "]" << std::endl << std::endl;
    _idx++;
}

void PhoneBook::search()
{
    int n = _idx % _max;
    if (_idx >= _max)
        n = _max;
    if (_idx == 0)
    {
        std::cout << "PhoneBook is empty" << std::endl;
        return ;
    }
    int i = 0;
    tableHeader();
    while (n > i)
    {
        _contacts[i].table(i);
        i++;
    }
    std::string ctc;
    while (true)
    {
        std::cout << "Enter INDEX for contact " << std::endl;
        std::getline(std::cin, ctc);
        i = ctc[0] - '0';
        if (ctc.length() == 1 && (i >= 0 && i < n))
        {
            std::cout << "CONTACT INDEX [" << i << "]" << std::endl;
            _contacts[i].printContact();
            break ;
        }
        std::cout << "INVALID INPUT" << std::endl;
    }
}

void PhoneBook::tableHeader()
{
    std::cout << std::endl 
              << "---------------------------------------------" << std::endl;
    std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last"
              << "|" << std::setw(10) << "Nickname"
              << "|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}