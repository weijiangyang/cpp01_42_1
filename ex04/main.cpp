/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:50:08 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 13:17:29 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cerrno>
#include <cstring>

bool replaceFile(const std::string& fileName, const std::string& s1, const std::string& s2)
{
	std::ifstream infile(fileName.c_str());
	if(!infile)
	{
		std::cerr << "Error: cannot open file " << fileName << ": " 
		<< std::strerror(errno) << std::endl;
		return (false);
	}
	std::ofstream outfile((fileName + ".replace").c_str());
		if (!outfile)
	{
		std::cerr << "Error: cannot create output file" << fileName << ".replace:"
		<< std::strerror(errno) << std::endl;
        return (false);
	}
	std::string line;
	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line;
		if(!infile.eof())
			outfile << std::endl;
	}
	return (true);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./program filename s1 s2" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}
	if(!replaceFile(filename, s1, s2))
		return (1);
	return(0);
}