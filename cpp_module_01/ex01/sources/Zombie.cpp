/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:47 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/03 19:36:10 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/Zombie.hpp"

Zombie::Zombie(void) {
	this->name = "";
}

Zombie::~Zombie(void) {
	std::cout << Zombie::name << ": No more BraiiiiiiinnnzzzZ =(" << std::endl;
}

void Zombie::announce(void) {
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}