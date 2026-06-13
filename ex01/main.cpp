/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 10:26:05 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/13 11:00:50 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int n = 5;
	Zombie	*horde = zombieHorde(n, "Horde Zombie");
	if (!horde)
		return (1);

	int	i = 0;
	while (i < n)
	{
		horde[i].announce();
		i++;
	}

	delete[] horde;
	return (0);
}
