/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_buffer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluegham <tluegham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:25:03 by tluegham          #+#    #+#             */
/*   Updated: 2025/08/06 23:25:04 by tluegham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

std::string replace_buffer(const std::string &buffer, const std::string &str1, const std::string &str2)
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
