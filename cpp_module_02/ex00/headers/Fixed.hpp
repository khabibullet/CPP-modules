/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:48 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/06 19:43:38 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
private:
	int raw;
	static const int fract = 8;
	
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& original);

	Fixed & operator=(const Fixed& fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};