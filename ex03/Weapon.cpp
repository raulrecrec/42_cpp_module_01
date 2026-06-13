/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 12:24:36 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 12:50:11 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	type = weapon_type;
}

const std::string&	Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string weapon_type)
{
	type = weapon_type;
}