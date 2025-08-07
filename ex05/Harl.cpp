/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluegham <tluegham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:39:04 by tluegham          #+#    #+#             */
/*   Updated: 2025/08/07 16:24:45 by tluegham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::complain(std::string level)
{
	const static int arrAmount = 4;
	std::string strArr[arrAmount] = { 
		"DEBUG", 
		"INFO", 
		"WARNING", 
		"ERROR" 
	};
	void (Harl::*func[arrAmount])(void) = { 
		&Harl::debug, 
		&Harl::info, 
		&Harl::warning, 
		&Harl::error 
	};

	for (int i = 0; i < arrAmount; i++)
	{
		if (level == strArr[i])
			(this->*(func[i]))();
	} 
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}


void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}


void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
