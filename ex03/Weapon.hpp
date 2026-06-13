/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 12:24:38 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 12:31:40 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
	std::string	type;

	public:
	Weapon(std::string weapon_type);
	const std::string	&getType() const ;
	void				setType(std::string weapon_type);
};

#endif