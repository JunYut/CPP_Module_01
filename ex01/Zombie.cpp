/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:58:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/29 15:17:57 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Destroying " + this->_name + "..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
