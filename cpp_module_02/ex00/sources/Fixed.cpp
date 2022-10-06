/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:47 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/06 19:38:49 by anemesis         ###   ########.fr       */
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

Fixed& Fixed::operator=(const Fixed& original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	raw = original.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return raw;
}

void Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}