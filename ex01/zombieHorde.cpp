/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 10:26:20 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 10:59:06 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string zombie_name)
{
	Zombie	*horde = new Zombie[n];

	if (n <= 0)
		return (NULL);

	int	i = 0;
	while (i < n)
	{
		horde[i].set_name(zombie_name);
		i++;
	}
	return (horde);
}
