/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:23:37 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 10:40:16 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
	std::string	name;

	public:
	Zombie(void);
	Zombie(std::string zombie_name);
	~Zombie(void);
	void	announce(void) const;
	void	set_name(std::string zombie_name);
};

Zombie	*zombieHorde(int N, std::string zombie_name);

#endif
