/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:39:33 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/04 17:46:35 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
private:
	const std::string name;
	Weapon& weapon;
	
public:
	HumanA(std::string name, Weapon& weapon);
	void attack(void);
};