/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:47 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/04 17:32:17 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Weapon.hpp"

Weapon::Weapon(std::string type): type(type) { };

std::string& Weapon::getType(void) {
	return (this->type);
}

void Weapon::setType(std::string newType) {
	this->type = newType;
}