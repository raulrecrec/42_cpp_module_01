/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:23:37 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/12 19:09:01 by rexposit         ###   ########.fr       */
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

Zombie	*newZombie(std::string zombie_name);
void	randomChump(std::string zombie_name);

#endif
