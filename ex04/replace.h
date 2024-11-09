/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:36:48 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/09 13:01:35 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef REPLACE_HPP
# define REPLACE_HPP

# include <sstream>
# include <fstream>
# include <iostream>

void		replace(const std::string &filename, const std::string &s1, const std::string &s2);
void		write_file(const std::string &filename, const std::string &content);
void		replace_str(std::string &content, const std::string &s1, const std::string &s2);
std::string	read_file(const std::string &filename);
bool		validate(int argc, char *argv[]);

# endif
