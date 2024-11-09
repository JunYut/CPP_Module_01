/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:38:15 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/09 12:23:19 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.h"

bool	validate(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return false;
	}
	std::ifstream	file(argv[1]);
	if (!file.is_open())
	{
		std::cerr << "Error: Cannot open file" << std::endl;
		return false;
	}
	return true;
}
