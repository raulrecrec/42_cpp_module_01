/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:23:33 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 10:21:59 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string zombie_name)
{
	this->name = zombie_name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " has been destroyed\n";
}

void	Zombie::announce(void) const
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string zombie_name)
{
	this->name = zombie_name;
}
