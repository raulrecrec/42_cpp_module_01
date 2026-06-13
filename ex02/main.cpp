/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 11:06:03 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 11:16:24 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Memory addres of string: " << &string << "\n";
	std::cout << "Memory addres held by stringPTR: " << stringPTR << "\n";
	std::cout << "Memory addres held by stringREF: " << &stringREF << "\n";

	std::cout << "Value of string: " << string << "\n";
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "Value pointed to by stringREF: " << stringREF << "\n";

	return (0);
}
