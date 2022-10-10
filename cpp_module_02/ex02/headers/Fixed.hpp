/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:48 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/10 18:54:02 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
private:
	int raw;
	static const int fract = 8;
	
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& original);

	Fixed& operator=(const Fixed& fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed(const int intNum);
	Fixed(const float floatNum);

	int toInt(void) const;
	float toFloat(void) const;

	bool operator>(Fixed const &ref) const;
	bool operator<(Fixed const &ref) const;
	bool operator>=(Fixed const &ref) const;
	bool operator<=(Fixed const &ref) const;
	bool operator==(Fixed const &ref) const;
	bool operator!=(Fixed const &ref) const;

	Fixed const operator+(Fixed const &ref);
	Fixed const operator-(Fixed const &ref);
	Fixed const operator*(Fixed const &ref);
	Fixed const operator/(Fixed const &ref);

	Fixed const operator++();
	Fixed const operator++(int);
	Fixed const operator--();
	Fixed const operator--(int);

	Fixed static min(Fixed a, Fixed b);
	Fixed static max(Fixed a, Fixed b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);