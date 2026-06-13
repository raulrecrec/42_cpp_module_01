/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 12:24:31 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 13:18:44 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string human_name);
		void	setWeapon(Weapon &human_weapon);
		void	attack(void) const;
};

#endif