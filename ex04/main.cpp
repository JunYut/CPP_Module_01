/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:28:27 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/09 13:11:22 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.h"

int	main(int argc, char *argv[])
{
	if (!validate(argc, argv))
		return 1;
	replace(argv[1], argv[2], argv[3]);
	return 0;
}
