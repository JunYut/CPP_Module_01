/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:50:33 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/21 09:21:26 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int	main(void)
{
	Zombie	*heap;

	heap = newZombie("Heap");
	heap->announce();
	randomChump("Stack");

	delete heap;

	return 0;
}
