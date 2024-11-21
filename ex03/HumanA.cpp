/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:35:40 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/21 10:18:41 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << _name + " attacks with his " + _weapon.getType() << std::endl;
}
