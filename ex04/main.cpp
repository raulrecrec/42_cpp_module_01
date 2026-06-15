/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 11:24:18 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/15 13:08:35 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace_content(std::string str, std::string s1, std::string s2)
{
	std::string				result = "";
	std::string::size_type	pos = 0;
	std::string::size_type	found;

	if (s1.empty())
		return (str);
	found = str.find(s1, pos);
	while (found != std::string::npos)
	{
		result += str.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
		found = str.find(s1, pos);
	}
	result += str.substr(pos);
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (s1.empty())
		return (1);

	std::ifstream	input(filename.c_str());
	if (!input.is_open())
	{
		std::cout << "Error trying to open the file\n";
		return (1);
	}

	std::string		output_name = filename + ".replace";
	std::ofstream	output(output_name.c_str());
	if (!output.is_open())
	{
		std::cout << "Error trying to create the file\n";
		return (1);
	}

	std::string	content;
	char		c;
	while (input.get(c))
		content += c;
	
	output << replace_content(content, s1, s2);
	return (0);
}
