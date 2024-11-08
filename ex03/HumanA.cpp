/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:35:40 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/08 14:59:00 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
}

void	HumanA::attack()
{
	std::cout << this->_name + " attacks with his " + this->_weapon.getType() << std::endl;
}
