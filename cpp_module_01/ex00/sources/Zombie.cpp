/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:47 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/05 15:56:48 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << Zombie::name << ": No more BraiiiiiiinnnzzzZ =(" << std::endl;
}

void Zombie::announce(void) {
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}