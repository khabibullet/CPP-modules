/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:48 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/03 19:39:26 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie {
private:
	std::string name;
	
public:
	Zombie();
	~Zombie();
	
	void announce(void);
	static Zombie* zombieHorde(int N, std::string name);
};