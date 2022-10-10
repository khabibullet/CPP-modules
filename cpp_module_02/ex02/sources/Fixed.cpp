/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:47 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/10 19:01:38 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

Fixed::Fixed(): raw(0) { }

Fixed::~Fixed() { }

Fixed::Fixed(const Fixed& original) {
	raw = original.getRawBits();
}

Fixed::Fixed(const int intNum) {
	raw = intNum << fract;
}

Fixed& Fixed::operator=(const Fixed& original)
{
	raw = original.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return raw;
}

void Fixed::setRawBits(int const raw) {
	this->raw = raw;
}

Fixed::Fixed(const float floatNum) {
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

bool Fixed::operator>(Fixed const &ref) const
{
	return raw > ref.raw;
}

bool Fixed::operator<(Fixed const &ref) const {
	return raw < ref.raw;
}

bool Fixed::operator>=(Fixed const &ref) const {
	return raw >= ref.raw;
}

bool Fixed::operator<=(Fixed const &ref) const {
	return raw <= ref.raw;
}

bool Fixed::operator==(Fixed const &ref) const {
	return raw == ref.raw;
}

bool Fixed::operator!=(Fixed const &ref) const {
	return raw != ref.raw;
}

Fixed const Fixed::operator+(Fixed const &ref) {
	Fixed tmp(toFloat() + ref.toFloat());
	return tmp;
}

Fixed const Fixed::operator-(Fixed const &ref) {
	Fixed tmp(toFloat() - ref.toFloat());
	return tmp;
}

Fixed const Fixed::operator*(Fixed const &ref) {
	Fixed tmp(toFloat() * ref.toFloat());
	return tmp;
}

Fixed const Fixed::operator/(Fixed const &ref) {
	Fixed tmp(toFloat() / ref.toFloat());
	return tmp;
}

Fixed const Fixed::operator++() {
	++raw;
	return *this;
}

Fixed const Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	raw++;
	return tmp;
}

Fixed const Fixed::operator--() {
	--raw;
	return *this;
}

Fixed const Fixed::operator--(int) {
	Fixed tmp;

	tmp = *this;
	raw--;
	return tmp;
}

Fixed Fixed::min(Fixed a, Fixed b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

Fixed Fixed::max(Fixed a, Fixed b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}