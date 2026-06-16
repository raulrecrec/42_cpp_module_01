/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:17:45 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/16 11:40:50 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	get_level_index(std::string level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (4);
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Invalid arguments\n";
		return (1);
	}

	int	index = get_level_index(argv[1]);

	switch (index)
	{
		case 0:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 1:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 2:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			harl.complain("INVALID");
			break ;
	}

	return (0);
}
