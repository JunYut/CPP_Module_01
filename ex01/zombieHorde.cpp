/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:48:23 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/08 10:27:06 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	if (N <= 0)
	{
		std::cout << "N is less or equals to 0" << std::endl;
		return (NULL);
	}
	horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		horde[i].set_name(name);
	}
	return (horde);
}
