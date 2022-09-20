/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:55:43 by anemesis          #+#    #+#             */
/*   Updated: 2022/09/20 22:16:02 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PhoneBook.hpp"

int main(void) {
	PhoneBook myPhoneBook = PhoneBook();
	std::string command;
	while (!std::cin.eof()) {
		std::cout << "Please, insert command" << std::endl;
		std::cin >> command;
		if(command == "ADD") {
			myPhoneBook.add();
		} else if (command == "SEARCH") {
			myPhoneBook.search();
		} else if (command == "EXIT") {
			return (0);
		}
	}
	return (0);
}