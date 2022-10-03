/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:53:22 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/03 17:23:35 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie* newZombie(std::string name) {
	return (new Zombie(name));
}