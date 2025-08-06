/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluegham <tluegham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:16:14 by tluegham          #+#    #+#             */
/*   Updated: 2025/08/06 23:16:15 by tluegham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

std::string replace_buffer(const std::string &buffer, const std::string &str1, const std::string &str2);

static void run_buffer_tests(const std::string &buffer1, const std::string &buffer2, const std::string &buffer3,
	const std::string &to_replace, const std::string &replace_by)
{
	std::cout << "testing different buffers with to_replace: \'" << to_replace << "\', replace_by: " << replace_by << "\'." << std::endl;
	std::cout << replace_buffer(buffer1, to_replace, replace_by) << std::endl;
	std::cout << replace_buffer(buffer2, to_replace, replace_by) << std::endl;
	std::cout << replace_buffer(buffer3, to_replace, replace_by) << std::endl;
}

int main(void)
{
	std::string buffer1 = "abcdefg";
	std::string buffer2 = "a  a  aa aa  a a aaa a aa";
	std::string buffer3 = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.";

	std::cout << "buffer1: " << buffer1 << std::endl
			  << "buffer2: " << buffer2 << std::endl
			  << "buffer3: " << buffer3 << std::endl;

	run_buffer_tests(buffer1, buffer2, buffer3, "a", "0");
	run_buffer_tests(buffer1, buffer2, buffer3, "aa", "00");
	run_buffer_tests(buffer1, buffer2, buffer3, "a", "many chars here!");
	run_buffer_tests(buffer1, buffer2, buffer3, " ", "_space_");
	run_buffer_tests(buffer1, buffer2, buffer3, "fg", "");
}
