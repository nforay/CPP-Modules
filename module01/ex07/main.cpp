/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:54:00 by nforay            #+#    #+#             */
/*   Updated: 2021/02/04 17:06:50 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <errno.h>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "./replace <file> <old-text> <new-text>" << std::endl;
		return (1);
	}
	std::ifstream		inputfile;
	std::ofstream		outputfile;
	std::string			linecontent;
	const std::string	filename(std::string(argv[1]) + ".replace");
	const std::string	s1(argv[2]);
	const std::string	s2(argv[3]);
	std::size_t			pos = 0;

	if (filename == ".replace" || !s1.length() || !s2.length())
	{
		std::cout << "./replace <file> <old-text> <new-text>" << std::endl;
		return (1);
	}
	inputfile.open(argv[1], std::fstream::in);
	if (!inputfile.is_open())
	{
		std::cout << "Input file error: " << std::strerror(errno) << std::endl;
		return (2);
	}
	outputfile.open(filename.c_str(), std::fstream::out);
	if (!outputfile.is_open())
	{
		inputfile.close();
		std::cout << "Output file error: " << std::strerror(errno) << std::endl;
		return (3);
	}
	while (std::getline(inputfile, linecontent)) {
		pos = 0;
		while ((pos = linecontent.find(s1, pos)) != std::string::npos) {
			linecontent.replace(linecontent.find(s1), s1.length(), s2);
			pos += s2.length();
			std::cout << "text replaced:" << linecontent << std::endl;
		}
		if (inputfile.eof())
			outputfile << linecontent;
		else
			outputfile << linecontent << std::endl;
	}
	inputfile.close();
	outputfile.close();
	return (0);
}