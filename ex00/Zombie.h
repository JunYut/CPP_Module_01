/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:56:01 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/10/29 15:19:04 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef ZOMBIE_H
# define ZOMBIE_H

# include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

# endif
