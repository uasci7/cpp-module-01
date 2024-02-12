/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 07:40:10 by uasci             #+#    #+#             */
/*   Updated: 2024/01/22 04:46:19 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **argv, std::string str)
{
	std::ofstream	outfile;
	std::string temprary = argv[1];
	std::string replace = ".replace";
	std::string temp = temprary.append(replace);
	const char *full = temp.data();
	int				pos;

	outfile.open(full);
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	char			c;
	std::ifstream	infile;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "usage: replace <file> old_word new_word" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error: " << argv[1] << ":" << \
		" no such file or directory" << std::endl;
		return (1);
	}
	while(!infile.eof() && infile >> std::noskipws >> c)
		str += c;
	infile.close();
	return (replace(argv, str));
}
