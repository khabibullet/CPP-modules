/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:40:04 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/04 16:46:22 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory address of string is " << &string << std::endl;
	std::cout << "Memory address held by stringPTR is " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF is " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of the string variable is " << string << std::endl;
	std::cout << "Value pointed to by stringPTR is " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF is " << stringREF << std::endl;
	return (0);
}