/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 03:28:43 by uasci             #+#    #+#             */
/*   Updated: 2024/01/18 07:42:23 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

int	main(void)
{
	Zombie	*z = newZombie("Alex");
	z->announce();
	randomChump("Bruno");
	delete z;
}
