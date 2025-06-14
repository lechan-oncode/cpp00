/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechan <lechan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:25:38 by lechan            #+#    #+#             */
/*   Updated: 2025/06/14 17:43:37 by lechan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};
Contact::~Contact() {};

std::string Contact::truncate(const std::string &str) 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::table(int i)
{
     std::cout << "|" << std::setw(10) << i
               << "|" << std::setw(10) << truncate(this->_firstName)
               << "|" << std::setw(10) << truncate(this->_lastName)
               << "|" << std::setw(10) << truncate(this->_nickName)
               << "|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

void Contact::printContact()
{
    std::cout << "First name: " << this->_firstName << std::endl;
    std::cout << "Last name: " << this->_lastName << std::endl;
    std::cout << "Nick name: " << this->_nickName << std::endl;
    std::cout << "Phone number: " << this->_phoneNumber <<std::endl;
    std::cout << "Darkest secret: " << this->_darkestSecret << std::endl << std::endl;
}

int isAllSpace(const std::string &input)
{
    size_t i = 0;
    while (input.length() > i)
    {
        if (!isspace(input[i]))
            return (1);
        i++;
    }
    return (0);
}

std::string Contact::validInput(const std::string &prompt)
{
    std::string input;
    while (true)
    {
        std::cout << prompt ;
        std::getline(std::cin, input);
        if (!input.empty() && isAllSpace(input))
            break ;
        std::cout << "INVALID INPUT" << std::endl;
    }
    return (input);
}

void Contact::setContact() 
{
    _firstName = validInput("Enter First Name :");
    _lastName = validInput("Enter Last Name :");
    _nickName = validInput("Enter Nickname :");
    _phoneNumber = validInput("Enter Phone Number :");
    _darkestSecret = validInput("Enter Darkest Secret :");
}