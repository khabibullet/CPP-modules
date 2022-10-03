/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:48:00 by anemesis          #+#    #+#             */
/*   Updated: 2022/09/20 22:21:30 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <stdio.h>

class PhoneBook {
private:
	Contact contacts[8];
	int oldest;
	std::string cropField(std::string field);
	
public:
	PhoneBook();
	~PhoneBook();
	void add();
	void search();
};