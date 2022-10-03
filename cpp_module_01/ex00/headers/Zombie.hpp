/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:48 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/03 17:58:53 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie {
private:
	std::string name;
	
public:
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);