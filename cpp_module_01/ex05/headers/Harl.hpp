/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:48 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/05 16:23:32 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	void complain(std::string level);
};

typedef void (Harl::*f)(void);