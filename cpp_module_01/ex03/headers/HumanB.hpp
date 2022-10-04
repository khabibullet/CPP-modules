/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:39:35 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/04 17:48:49 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
private:
	const std::string name;
	Weapon* weaponPtr;

public:
	HumanB(std::string name);
	void setWeapon(Weapon& weapon);
	void attack(void);
};