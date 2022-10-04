/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:39:13 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/04 18:04:11 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weaponPtr(nullptr) { };

void HumanB::attack(void) {
	if (weaponPtr != nullptr) {
		std::cout << name << " attacks with their " << (*weaponPtr).getType() << std::endl;
	} else {
		std::cout << name << " does not have any weapon" << std::endl;
	}
}

void HumanB::setWeapon(Weapon& weapon) {
	weaponPtr = &weapon;
}