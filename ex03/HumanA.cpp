/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 12:24:35 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 13:14:48 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string human_name, Weapon &human_weapon) : weapon(human_weapon)
{
	name = human_name;
}

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
