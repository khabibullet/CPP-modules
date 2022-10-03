/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:55:43 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/03 19:39:31 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

int main(void) {
	Zombie* zombies = Zombie::zombieHorde(5, "Alyosha");

	for (int i = 0; i < 5; i++) {
		zombies[i].announce();
	}
	
	delete[] zombies;
	return (0);
}