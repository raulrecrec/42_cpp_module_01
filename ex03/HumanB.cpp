/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 12:24:29 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 13:25:08 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string human_name)
{
	name = human_name;
	weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon_name)
{
	weapon = &weapon_name;
}

void	HumanB::attack(void) const
{
	if (weapon == NULL)
		std::cout << name << " has no weapon\n";
	else
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
}
