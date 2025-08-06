/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluegham <tluegham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:05:47 by tluegham          #+#    #+#             */
/*   Updated: 2025/08/06 23:24:59 by tluegham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string replace_buffer(const std::string &buffer, const std::string &str1, const std::string &str2);

static std::string read_file(std::ifstream &file)
{
	std::string line;
	std::string read_file;

	while (std::getline(file, line))
	{
		read_file.append(line + '\n');
	}
	if (file.eof())
		file.clear();
	return (read_file);
}

static void create_replaced_buffer_file(std::string &buffer, const std::string &file_name)
{
	std::ofstream outfile((file_name + ".replace").c_str());
	outfile << buffer;
	outfile.close();
}

static bool has_bad_input(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong amount of arguments!" << std::endl;
		return (false);
	}
	if (std::string(argv[2]).empty())
	{
		std::cout << "Cannot replace empty strings!" << std::endl;
		return (false);
	}

	return (true);
}

int main(int argc, char **argv)
{
	if (!has_bad_input(argc, argv))
		return (0);
	std::ifstream file;
	std::string buffer;
	std::string to_replace = argv[2];
	std::string replace_with = argv[3];
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Couldn't open file \'" << argv[1] << "\'!" << std::endl;
		return (0);
	}
	buffer = read_file(file);
	file.close();
	if (file.fail())
	{
		std::cout << "There was an error reading from file \'" << argv[1] << "\'!" << std::endl;
		return (1);
	}
	buffer = replace_buffer(buffer, to_replace, replace_with);
	create_replaced_buffer_file(buffer, std::string(argv[1]));
	return (0);
}
