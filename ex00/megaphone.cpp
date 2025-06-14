/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechan <lechan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:24:40 by lechan            #+#    #+#             */
/*   Updated: 2025/06/14 17:42:01 by lechan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
  int i;
  int j;

  i = 1;
  if (ac == i)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else
  {
 	  while (i < ac)
	  {
		  j = 0;
		  while (av[i][j])
			  std::cout << (char)std::toupper(av[i][j++]);
		  i++;
      std::cout << std::endl;
	  }  
  }
 
  return (0);
}
