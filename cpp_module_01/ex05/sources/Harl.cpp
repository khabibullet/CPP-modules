/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:47 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/05 17:31:46 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/Harl.hpp"

void Harl::debug(void){
	std::cout << "DEBUG: I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-specialketchup "
				<< "burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. "
				<< "You didn't put enough bacon in my burger! If you did, "
				<< "I wouldn't be asking for more!" << std::endl;
}
void Harl::warning(void){
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. "
				<< "I've been coming for years whereas you started "
				<< "working here since last month." << std::endl;
}
void Harl::error(void){
	std::cout << "ERROR: This is unacceptable! I want to "
				<< "speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	f func[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "debug", "info", "warning", "error" };

	int i;
	for (i = 0; level != levels[i]; i++);
	(this->*func[i])();
}