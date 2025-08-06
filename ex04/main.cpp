/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluegham <tluegham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:05:47 by tluegham          #+#    #+#             */
/*   Updated: 2025/08/06 22:21:46 by tluegham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static std::string read_file(std::ifstream &file)
{
	std::string line;
	std::string read_file;

	while (std::getline(file, line))
	{
		read_file.append(line + '\n');
	}
	return (read_file);
}

static std::string replace_buffer(const std::string &buffer, const std::string &str1, const std::string &str2)
{
	std::string	new_buffer;
	size_t		found_pos = 0;
	
	for (size_t i = 0; i < buffer.length();)
	{
		found_pos = buffer.find(str1, i);
		new_buffer += buffer.substr(i, found_pos - i);

		i = found_pos + str1.length();
		if (found_pos == std::string::npos)
			break;
		new_buffer += str2;
	}

	return (new_buffer);
}

static void create_replaced_buffer_file(std::string &buffer, char *file_name)
{
	(void) file_name;
	std::cout << buffer << std::endl;
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
		std::cout << "Couldn't open file " << argv[1] << "!" << std::endl;
		return (0);
	}
	buffer = read_file(file);
	file.close();
	buffer = replace_buffer(buffer, to_replace, replace_with);
	create_replaced_buffer_file(buffer, argv[1]);
	return (0);
}
