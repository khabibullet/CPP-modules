/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:53:22 by anemesis          #+#    #+#             */
/*   Updated: 2022/09/20 22:13:27 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../headers/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "Opening phone book" << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << "Closing phone book" << std::endl;
}

void PhoneBook::add() {
	std::string input;
	std::cout << "Adding new contact\nPlease, enter first name" << std::endl;
	std::cin >> input;
	if (input.length() == 0) {
		contacts[oldest].setFirstName("n/a");
	} else {
		contacts[oldest].setFirstName(input);
	}
	std::cout << "Please, enter last name" << std::endl;
	std::cin >> input;
	if (input.length() == 0) {
		contacts[oldest].setLastName("n/a");
	} else {
		contacts[oldest].setLastName(input);
	}
	std::cout << "Please, enter nickname" << std::endl;
	std::cin >> input;
	if (input.length() == 0) {
		contacts[oldest].setNickName("n/a");
	} else {
		contacts[oldest].setNickName(input);
	}
	std::cout << "Please, enter phone number" << std::endl;
	std::cin >> input;
	if (input.length() == 0) {
		contacts[oldest].setPhoneNumber("n/a");
	} else {
		contacts[oldest].setPhoneNumber(input);
	}
	std::cout << "Please, enter darkest secret" << std::endl;
	std::cin >> input;
	if (input.length() == 0) {
		contacts[oldest].setDarkestSecret("n/a");
	} else {
		contacts[oldest].setDarkestSecret(input);
	}
	if (oldest < 7) {
		oldest++;
	} else {
		oldest = 0;
	}
	std::cout << "New contact have been succesfully added" << std::endl;
}

std::string PhoneBook::cropField(std::string field) {
	
	if (field.length() <= 10) {
		return (field);
	}
	return (field.insert(9, ".").substr(0, 10));
}

void PhoneBook::search() {
	std::string output;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for(int i = 0; i < 8; i++) {
		std::cout << "|" << std::setw(10) << std::setfill(' ') << i + 1;
		std::cout << "|" << std::setw(10) << std::setfill(' ') << cropField(contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << std::setfill(' ') << cropField(contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << std::setfill(' ') << cropField(contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}
	std::cout << "Please, enter contact's index" << std::endl;
	std::string choosenID;
	int id;
	std::cin >> choosenID;
	id = std::atoi(choosenID.c_str());
	if (id <= 0 || id > 8) {
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	std::cout << "First name: " << contacts[id - 1].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[id - 1].getLastName() << std::endl;
	std::cout << "Nick name: " << contacts[id - 1].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[id - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[id - 1].getDarkestSecret() << std::endl;
}