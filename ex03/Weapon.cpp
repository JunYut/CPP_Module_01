/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:12:40 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/08 14:55:33 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(const std::string type)
{
	this->_type = type;
}
