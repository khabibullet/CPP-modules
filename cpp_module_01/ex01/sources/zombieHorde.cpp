/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:53:22 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/05 17:43:02 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name) {
	if (N <= 0) {
		return (nullptr);
	}

	Zombie* zombies = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		zombies[i].name = name;
	}
	
	return (zombies);
}