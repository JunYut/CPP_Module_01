/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:56:59 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/08 10:24:20 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int	main(void)
{
	Zombie	*horde;
	int		N;

	N = 1;
	horde = zombieHorde(N, "horde 1");
	if (horde != NULL)
	{
		for (int i = 0; i < N; ++i)
			horde[i].announce();
		delete[] horde;
		std::cout << std::endl;
	}

	N = 5;
	horde = zombieHorde(N, "horde 2");
	if (horde != NULL)
	{
		for (int i = 0; i < N; ++i)
			horde[i].announce();
		delete[] horde;
		std::cout << std::endl;
	}

	N = 0;
	horde = zombieHorde(N, "horde 2");
	if (horde != NULL)
	{
		for (int i = 0; i < N; ++i)
			horde[i].announce();
		delete[] horde;
		std::cout << std::endl;
	}

	N = -1;
	horde = zombieHorde(N, "horde 2");
	if (horde != NULL)
	{
		for (int i = 0; i < N; ++i)
			horde[i].announce();
		delete[] horde;
		std::cout << std::endl;
	}
}
