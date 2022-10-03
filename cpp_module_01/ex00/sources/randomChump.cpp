/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:23:06 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/03 17:41:55 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

void randomChump(std::string name) {
	Zombie zombie = Zombie(name);
	zombie.announce();
}