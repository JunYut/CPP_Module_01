/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:36:20 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/08 15:17:24 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void	HumanB::attack()
{
	if (_weapon)
		std::cout << this->_name + " attacks with his " + _weapon->getType() << std::endl;
	else
		std::cout << this->_name + " have no weapons" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
