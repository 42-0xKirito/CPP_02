# include "../includes/Fixed.hpp"

Fixed &			Fixed::min( Fixed & a, Fixed & b )
{
	if ( a < b )
		return a;
	return b;
}

Fixed const &	Fixed::min( Fixed const & a, Fixed const & b )
{
	if ( a < b )
		return a;
	return b;
}

Fixed &			Fixed::max( Fixed & a, Fixed & b )
{
	if ( a < b )
		return b;
	return a;
}

Fixed const &	Fixed::max( Fixed const & a, Fixed const & b )
{
	if ( a < b )
		return b;
	return a;
}
