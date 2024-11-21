/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:54:20 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/21 10:54:48 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.h"

using std::string;

void	replace(const string &filename, const string &s1, const string &s2)
{
	string	content;

	content = read_file(filename);
	replace_str(content, s1, s2);
	write_file(filename, content);
}

void	write_file(const string &filename, const string &content)
{
	std::ofstream	outfile((filename + ".replace").c_str());

	outfile << content;
}

void	replace_str(string &content, const string &s1, const string &s2)
{
	size_t	pos;
	
	if (s1.empty())
		return ;
	pos = 0;
	while ((pos = content.find(s1, pos)) != string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
}

string	read_file(const string &filename)
{
	std::ifstream	file(filename.c_str());
	std::ostringstream	buffer;

	buffer << file.rdbuf();
	return (buffer.str());
}
