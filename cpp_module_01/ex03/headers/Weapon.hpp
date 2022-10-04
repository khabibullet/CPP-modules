/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:48 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/04 17:23:18 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon {
private:
	std::string type;
	
public:
	Weapon(std::string type);
	std::string& getType(void);
	void setType(std::string newType);
};