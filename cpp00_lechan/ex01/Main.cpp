/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechan <lechan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:26:02 by lechan            #+#    #+#             */
/*   Updated: 2025/06/14 16:26:04 by lechan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void)
{
    std::string cmd;
    PhoneBook phoneBook;
    while (true)
    {
        std::cout << "Enter a command ( ADD / SEARCH / EXIT )" << std::endl;
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
            phoneBook.add();
        else if (cmd == "SEARCH")
            phoneBook.search();
        else if (cmd == "EXIT")
            break ;
        else
            std::cout << "INVALID INPUT" << std::endl;
    }
    std::cout << "EXIT PHONEBOOK" << std::endl;
    return (0);
}