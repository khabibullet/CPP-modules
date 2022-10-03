/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:55:43 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/03 18:13:41 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

int main(void) {
	randomChump("Mishanya");
	
	Zombie *zombie = newZombie("Alyosha");
	(*zombie).announce();
	delete zombie;
	
	return (0);
}