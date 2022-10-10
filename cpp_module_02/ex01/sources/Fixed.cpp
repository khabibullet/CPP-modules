/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:47 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/10 18:57:12 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

Fixed::Fixed(): raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() { 
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original) {
	std::cout << "Copy constructor called" << std::endl;
	raw = original.getRawBits();
}

Fixed::Fixed(const int intNum) {
	std::cout << "Int constructor called" << std::endl;
	raw = intNum << fract;
}

Fixed& Fixed::operator=(const Fixed& original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	raw = original.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return raw;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

Fixed::Fixed(const float floatNum) {
	std::cout << "Float constructor called" << std::endl;
	raw = roundf(floatNum * (1 << fract));
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}

int Fixed::toInt() const {
	return (raw >> fract);
}

float Fixed::toFloat() const {
	return (static_cast<float>(raw) / (1 << fract));
}