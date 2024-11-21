/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:36:20 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/21 10:33:02 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(const std::string name)
{
	_weapon = NULL;
	_name = name;
}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name + " attacks with his " + _weapon->getType() << std::endl;
	else
		std::cout << _name + " have no weapons" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
