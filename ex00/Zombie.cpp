/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:58:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/21 09:24:53 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	set_name("unnamed");
}

Zombie::Zombie(const std::string &name)
{
	set_name(name);
}

Zombie::~Zombie()
{
	std::cout << "Destroying " + _name + "..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string &name)
{
	_name = name;
}
