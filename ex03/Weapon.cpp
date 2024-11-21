/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:12:40 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/21 09:48:23 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string type)
{
	setType(type);
}

Weapon::~Weapon() {}

const std::string	&Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(const std::string type)
{
	this->_type = type;
}
