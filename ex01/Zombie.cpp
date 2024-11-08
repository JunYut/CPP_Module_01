/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:58:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/08 10:17:52 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::Zombie() : _name("default") {}

Zombie::~Zombie()
{
	std::cout << "Destroying " + this->_name + "..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string name)
{
	this->_name = name;
}
