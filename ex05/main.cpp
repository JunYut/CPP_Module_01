/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:03:02 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/09 14:03:11 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(void)
{
	Harl	harl;
		
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
}
