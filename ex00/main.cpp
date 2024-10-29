/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:50:33 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/29 15:19:56 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int	main(void)
{
	Zombie	*zombie1 = newZombie("tryHard_1");
	zombie1->announce();
	delete zombie1;

	randomChump("tryHard_2");
}
